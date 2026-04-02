/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfernand <jfernand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 17:37:19 by jfernand          #+#    #+#             */
/*   Updated: 2026/02/16 18:04:37 by jfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie() {}
Zombie::Zombie(std::string name) : zombName(name) {}

Zombie::~Zombie() { std::cout << zombName << " was blown up!\n"; }

void	Zombie::announce()
{
	std::cout << zombName << ": BraiiiiiiinnnzzzZ...\n";
}

std::string&	Zombie::getName()
{
	return (zombName);
}

void			Zombie::setName(std::string& name)
{
	zombName = name;
}
