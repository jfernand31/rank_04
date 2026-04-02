/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfernand <jfernand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 18:46:02 by jfernand          #+#    #+#             */
/*   Updated: 2026/02/16 19:23:18 by jfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon wep) : name(name), weapon(wep) {}

HumanA::~HumanA() {}

void	HumanA::attack()
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
