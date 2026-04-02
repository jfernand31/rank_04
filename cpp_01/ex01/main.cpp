/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfernand <jfernand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 18:05:03 by jfernand          #+#    #+#             */
/*   Updated: 2026/02/16 18:32:00 by jfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <sstream>

std::string	toLower(const std::string& line)
{
	std::string	ret = line;
	for (size_t i = 0; i < line.length(); i++)
	{
		ret[i] = tolower(static_cast<int>(line[i]));
	}
	return (ret);
}

int	main(void)
{
	std::string	line;
	Zombie*	horde= NULL;
	int	nb = 0;

	while (true)
	{
		std::cout << "Commands available are HORDE, YELL and EXIT: ";
		std::getline(std::cin, line);
		std::string	command = toLower(line);
		if (command == "h" || command == "horde")
		{
			delete[] horde;
			std::cout << "Enter number of zombies: ";
			std::getline(std::cin, line);
			std::stringstream	ss(line);
			ss >> nb;
			std::cout << "Enter name: ";
			std::getline(std::cin, line);
			horde = zombieHorde(nb, line);
		}
		else if (command == "y" || command == "yell")
		{
			for (int i = 0; i < nb; i++)
				horde[i].announce();
		}
		else if (command == "e" || command == "exit")
			break ;
		else
			continue ;
	}
	delete[] horde;
	return (0);
}
