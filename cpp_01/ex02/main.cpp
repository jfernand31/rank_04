/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfernand <jfernand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 18:34:38 by jfernand          #+#    #+#             */
/*   Updated: 2026/02/16 18:38:55 by jfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(void)
{
	std::string		line = "HI THIS IS BRAIN";
	std::string*	stringPTR = &line;
	std::string&	stringREF = line;

	std::cout << &line << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;

	std::cout << line << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;

	return (0);
}
