/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfernand <jfernand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 18:46:12 by jfernand          #+#    #+#             */
/*   Updated: 2026/02/16 19:10:11 by jfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include <string>
# include "Weapon.hpp"

class	HumanA
{
private:
	std::string	name;
	Weapon		weapon;
public:
	HumanA(std::string newName, Weapon wep);
	~HumanA();
	void	attack();
};

#endif	
