/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfernand <jfernand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 17:53:30 by jfernand          #+#    #+#             */
/*   Updated: 2026/02/18 19:15:36 by jfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP
# include <string>

enum	level
{
	DEBUG,
	INFO,
	WARNING,
	ERROR,
	NONE
};

class	Harl
{
private:
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);

public:
	Harl();
	~Harl();
	void	harlFilter(std::string level);
};

#endif
