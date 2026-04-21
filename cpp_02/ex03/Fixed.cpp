/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfernand <jfernand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 18:11:13 by jfernand          #+#    #+#             */
/*   Updated: 2026/03/04 18:28:14 by jfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>
#include <iostream>

Fixed::Fixed() : value(0) { std::cout << "Default Constructor called\n"; }

Fixed::Fixed(const int iValue) {
  value = iValue << fractBits;
  std::cout << "Int constructor called\n";
}

Fixed::Fixed(const float fValue) {
  value = roundf(fValue * (1 << fractBits));
  std::cout << "Float constructor called\n";
}

Fixed::Fixed(const Fixed &other) {
  value = other.value;
  std::cout << "Copy constructor called\n";
}

Fixed &Fixed::operator=(const Fixed &other) {
  if (this != &other) {
    this->value = other.value;
  }
  std::cout << "Copy assignment operator called\n";
  return (*this);
}

Fixed::~Fixed() { std::cout << "Destructor called\n"; }

int Fixed::getRawBits(void) const {
  std::cout << "getRawBits member function called\n";
  return (value);
}

void Fixed::setRawBits(int const raw) {
  value = raw;
  std::cout << "setRawBits member function called\n";
}

float Fixed::toFloat() const { return ((float)value / (1 << fractBits)); }

int Fixed::toInt() const { return (value >> fractBits); }

std::ostream &operator<<(std::ostream &os, const Fixed &fixed) {
  os << fixed.toFloat();
  return (os);
}

bool Fixed::operator>(const Fixed &other) const {
  return (this->value > other.value);
}

bool Fixed::operator<(const Fixed &other) const {
  return (this->value < other.value);
}

Fixed Fixed::operator*(const Fixed &other) const {
  Fixed result;

  result.setRawBits((static_cast<long long>(this->value) * other.value) >>
                    fractBits);
  return (result);
}

Fixed Fixed::operator+(const Fixed &other) const {
  Fixed result;

  result.setRawBits(this->value + other.value);
  return (result);
}

Fixed Fixed::operator-(const Fixed &other) const {
  Fixed result;

  result.setRawBits(this->value - other.value);
  return (result);
}

Fixed Fixed::operator/(const Fixed &other) const {
  Fixed result;

  result.setRawBits((static_cast<long long>(this->value) << fractBits) /
                    other.value);
  return (result);
}

bool Fixed::operator>=(const Fixed &other) const {
  return (this->value >= other.value);
}

bool Fixed::operator<=(const Fixed &other) const {
  return (this->value <= other.value);
}

bool Fixed::operator==(const Fixed &other) const {
  return (this->value == other.value);
}

bool Fixed::operator!=(const Fixed &other) const {
  return (this->value != other.value);
}

Fixed &Fixed::min(Fixed &a, Fixed &b) {
  if (a > b)
    return (b);
  else
    return (a);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b) {
  if (a > b)
    return (b);
  else
    return (a);
}

Fixed &Fixed::max(Fixed &a, Fixed &b) {
  if (a > b)
    return (a);
  else
    return (b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b) {
  if (a > b)
    return (a);
  else
    return (b);
}

Fixed &Fixed::operator++() {
  this->value++;
  return (*this);
}

Fixed Fixed::operator++(int) {
  Fixed tmp(*this);
  this->value++;
  return (tmp);
}

Fixed &Fixed::operator--() {
  this->value--;
  return (*this);
}

Fixed Fixed::operator--(int) {
  Fixed tmp(*this);
  this->value--;
  return (tmp);
}
