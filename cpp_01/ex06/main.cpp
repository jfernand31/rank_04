/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfernand <jfernand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 19:16:23 by jfernand          #+#    #+#             */
/*   Updated: 2026/02/18 19:18:48 by jfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Usage is: ./harlFilter <level>\n";
		return (1);
	}
	Harl	harl;

	harl.harlFilter(argv[1]);
	return (0);
}
