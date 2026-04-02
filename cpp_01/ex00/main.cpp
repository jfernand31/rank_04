/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfernand <jfernand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 18:25:49 by jfernand          #+#    #+#             */
/*   Updated: 2026/01/16 18:47:05 by jfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie*	zomb = NULL;
	std::string	tmp;

	while (true)
	{
		std::cout << "Available commands are RANDOM, CREATE, CALL, EXIT:";
		if (!std::getline(std::cin, tmp))
			break ;
		if (tmp == "RANDOM")
		{
			std::cout << "Name:";
			std::getline(std::cin, tmp);
			randomChump(tmp);
		}
		else if (tmp == "CREATE")
		{
			std::cout << "Name:";
			std::getline(std::cin, tmp);
			delete zomb;
			zomb = newZombie(tmp);
		}
		else if (tmp == "CALL")
		{
			if (zomb)
				zomb->announce();
			else
			 	std::cout << "No zombie created yet\n";
		}
		else if (tmp == "EXIT")
			break ;
	}
	delete zomb;
	return (0);
}
