/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfernand <jfernand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 18:06:01 by jfernand          #+#    #+#             */
/*   Updated: 2026/02/25 19:28:54 by jfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H
# include <iostream>

class	Fixed
{
private:

	int					value;
	static const int	fractBits = 8;

public:

	Fixed();
	Fixed(const int iValue);
	Fixed(const float fValue);
	Fixed(const Fixed& other);
	Fixed&	operator=(const Fixed& other);
	~Fixed();

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	float	toFloat(void) const;
	int		toInt(void) const;

};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif
