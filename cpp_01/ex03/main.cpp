/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfernand <jfernand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 18:56:52 by jfernand          #+#    #+#             */
/*   Updated: 2026/02/16 19:31:27 by jfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int	main(void)
{
	HumanA*	hA = NULL;
	HumanB*	hB = NULL;
	Weapon	weaponB;
	Weapon	weaponA;
	std::string	line;

	while (true)
	{
		std::cout << "Available commands are (A), (B), (G)IVE weapon to B, (F)IGHT and (E)XIT: ";
		std::getline(std::cin, line);
		if (line == "A")
		{
			if(hA)
				delete hA;
			hB = NULL;
			std::string	a_name;
			std::string a_wep;
			std::cout << "Enter human name: ";
			std::getline(std::cin, a_name);
			std::cout << "Enter weapon: ";
			std::getline(std::cin, a_wep);
			weaponA.setType(a_wep);
			hA = new HumanA(a_name, weaponA);
		}
		else if (line == "B")
		{
			if(hB)
				delete hB;
			hB = NULL;
			std::string	b_name;
			std::string b_wep;
			std::cout << "Enter human name: ";
			std::getline(std::cin, b_name);
			std::cout << "Enter weapon: ";
			std::getline(std::cin, b_wep);
			hB = new HumanB(b_name);
			if (!b_wep.empty())
			{
				weaponB.setType(b_wep);
				hB->setWeapon(weaponB);
			}
		}
		else if (line == "G")
		{
			if (hB)
			{
				std::string tmp;
				std::cout << "Enter new weapon: ";
				std::getline(std::cin, tmp);
				weaponB.setType(tmp);
				hB->setWeapon(weaponB);
			}
			else
				std::cout << "Create B first\n";
		}
		else if (line == "F")
		{
			if(hA)
				hA->attack();
			else
				std::cout << "HumanA does not exist\n";
			if (hB)
				hB->attack();
			else
				std::cout << "HumanB does not exist\n";
		}
		else if (line == "E")
			break ;
		else
			continue ;
	}
	delete (hA);
	delete (hB);
	return (0);
}

