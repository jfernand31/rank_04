/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfernand <jfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 18:06:01 by jfernand          #+#    #+#             */
/*   Updated: 2026/04/21 18:34:00 by jfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H
#include <iostream>

class Fixed {
private:
  int value;
  static const int fractBits = 8;

public:
  Fixed();
  Fixed(const int iValue);
  Fixed(const float fValue);
  Fixed(const Fixed &other);
  Fixed &operator=(const Fixed &other);
  bool operator>(const Fixed &other) const;
  bool operator<(const Fixed &other) const;
  bool operator==(const Fixed &other) const;
  bool operator!=(const Fixed &other) const;
  bool operator>=(const Fixed &other) const;
  bool operator<=(const Fixed &other) const;
  Fixed operator+(const Fixed &other) const;
  Fixed operator-(const Fixed &other) const;
  Fixed operator*(const Fixed &other) const;
  Fixed operator/(const Fixed &other) const;
  Fixed &operator++();
  Fixed &operator--();
  Fixed operator++(int);
  Fixed operator--(int);

  static Fixed &min(Fixed &a, Fixed &b);
  static const Fixed &min(const Fixed &a, const Fixed &b);
  static Fixed &max(Fixed &a, Fixed &b);
  static const Fixed &max(const Fixed &a, const Fixed &b);

  ~Fixed();
  int getRawBits(void) const;
  void setRawBits(int const raw);
  float toFloat(void) const;
  int toInt(void) const;
};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);

#endif
