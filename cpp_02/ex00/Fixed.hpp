/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfernand <jfernand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 18:06:01 by jfernand          #+#    #+#             */
/*   Updated: 2026/02/25 18:31:08 by jfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

class	Fixed
{
private:

	int					value;
	static const int	fractBits = 8;

public:

	Fixed();
	Fixed(const Fixed& other);
	Fixed&	operator=(const Fixed& other);
	~Fixed();

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

};

#endif
