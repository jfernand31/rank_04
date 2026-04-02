/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfernand <jfernand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 18:18:08 by jfernand          #+#    #+#             */
/*   Updated: 2026/01/16 19:02:44 by jfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::Zombie(std::string name) : name(name) {}

Zombie::~Zombie()
{
	std::cout << name << " is blown up.\n";
}

void	Zombie::announce()
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n";
}


