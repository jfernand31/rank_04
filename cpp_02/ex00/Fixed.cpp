/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfernand <jfernand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 18:11:13 by jfernand          #+#    #+#             */
/*   Updated: 2026/02/25 18:31:12 by jfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed() : value(0) { std::cout << "Default Constructor called\n"; }
Fixed::Fixed(const Fixed& other)
{
	value = other.value;
	std::cout << "Copy constructor called\n";
}

Fixed&	Fixed::operator=(const Fixed& other)
{
	if(this != &other)
	{
		this->value = other.value;
	}
	std::cout << "Copy assignment operator called\n";
	return (*this);
}

Fixed::~Fixed() { std::cout << "Destructor called\n"; }

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return (value);
}

void	Fixed::setRawBits(int const raw)
{
	value = raw;
	std::cout << "setRawBits member function called\n";
}
