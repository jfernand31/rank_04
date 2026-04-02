/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfernand <jfernand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 17:57:57 by jfernand          #+#    #+#             */
/*   Updated: 2026/02/18 19:23:44 by jfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

Harl::Harl() {}

Harl::~Harl() {}

void	Harl::debug(void)
{
	std::cout << "#############\n"
				 "#   DEBUG   #\n"
				 "#############\n\n";
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n\n";
}

void	Harl::info(void)
{
	std::cout << "#############\n"
				 "#   INFO    #\n"
				 "#############\n\n";
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n\n";
}

void	Harl::warning(void)
{
	std::cout << "#############\n"
				 "#  WARNING  #\n"
				 "#############\n\n";
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years, whereas you started working here just last month!\n\n";
}

void	Harl::error(void)
{
	std::cout << "#############\n"
				 "#   ERROR   #\n"
				 "#############\n\n";
	std::cout << "This is unacceptable! I want to speak to the manager now.\n\n";
}

static level	getLevel(std::string s)
{
	if (s == "DEBUG" || s == "debug") return (DEBUG);
	if (s == "INFO" || s == "info") return (INFO);
	if (s == "WARNING" || s == "warning") return (WARNING);
	if (s == "ERROR" || s == "error") return (ERROR);
	return (NONE);
}


void	Harl::harlFilter(std::string level)
{
	switch(getLevel(level))
	{
		case DEBUG:
			debug();
			// fallthrough
		case INFO:
			info();
			// fallthrough
		case WARNING:
			warning();
			// fallthrough
		case ERROR:
		{
			error();
			break;
		}
		default:
		{
			std::cout << "Complaining about something... I don't know." << std::endl;
		}
	}
}
