/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfernand <jfernand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 18:51:32 by jfernand          #+#    #+#             */
/*   Updated: 2026/02/16 19:20:29 by jfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include <string>
# include "Weapon.hpp"

class	HumanB
{
private:
	std::string	name;
	Weapon		weapon;
public:
	HumanB(std::string newName);
	~HumanB();
	void	attack();
	void	setWeapon(Weapon wep);
};

#endif	
