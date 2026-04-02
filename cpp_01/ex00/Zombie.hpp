/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfernand <jfernand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 17:58:27 by jfernand          #+#    #+#             */
/*   Updated: 2026/01/16 18:48:38 by jfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>
# include <iostream>

class	Zombie
{
public:
	Zombie();
	Zombie(std::string name);
	~Zombie();

	void	announce(void);

private:
	std::string	name;
};

Zombie*	 newZombie(std::string name);
void		randomChump(std::string name);

#endif
