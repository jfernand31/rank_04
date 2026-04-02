/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfernand <jfernand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 19:36:09 by jfernand          #+#    #+#             */
/*   Updated: 2026/02/16 20:18:09 by jfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Usage is: ./notsed <file> <s1> <s2>\n";
		return (1);
	}
	std::string	s1 = argv[2];
	std::string	s2 = argv[3];
	if (s1.empty())
		return (0);
		
	std::ifstream	inFile(argv[1]);
	if(!inFile)
	{
		std::cout << "Failed to open file\n";
		return (1);
	}
	std::ofstream	outFile((std::string(argv[1]) + ".replace").c_str());
	if (!outFile)
	{
		std::cout << "Failed to create .replace file\n";
		return (1);
	}
	std::string	line;
	while (std::getline(inFile, line))
	{
		size_t	pos = 0;
		while ((pos = line.find(s1, pos))!= std::string::npos)
		{
			line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
			pos += s2.length();
		}
			outFile << line + "\n";
	}
	return (0);
}
