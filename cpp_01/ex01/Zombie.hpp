/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfernand <jfernand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 17:33:51 by jfernand          #+#    #+#             */
/*   Updated: 2026/02/16 18:17:31 by jfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>


class	Zombie
{
private:
	std::string	zombName;
public:
	Zombie();
	Zombie(std::string name);
	~Zombie();
	void	announce();
	std::string&	getName();
	void			setName(std::string& name);
};

struct	horde
{
	Zombie	zombie;
	horde*	next;
};

Zombie*	zombieHorde(int N, std::string name);

#endif
