/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfernand <jfernand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 18:44:05 by jfernand          #+#    #+#             */
/*   Updated: 2026/02/16 19:11:29 by jfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {}

Weapon::Weapon(std::string wep) : type(wep) {}

Weapon::~Weapon() {}

void	Weapon::setType(std::string& wep)
{
	type = wep;
}

const std::string	Weapon::getType()
{
	return (type);
}
