/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfernand <jfernand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 18:55:06 by jfernand          #+#    #+#             */
/*   Updated: 2026/02/16 19:32:51 by jfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : name(name) {}

HumanB::~HumanB() {}

void	HumanB::attack()
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}

void	HumanB::setWeapon(Weapon wep)
{
	weapon = wep;
}
