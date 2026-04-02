/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfernand <jfernand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 18:41:31 by jfernand          #+#    #+#             */
/*   Updated: 2026/02/16 19:07:54 by jfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <string>

class	Weapon
{
private:
	std::string	type;
public:
	Weapon();
	Weapon(std::string wep);
	~Weapon();
	void				setType(std::string& wep);
	const std::string	getType();
};

#endif
