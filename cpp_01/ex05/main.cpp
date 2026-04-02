#include "Harl.hpp"
#include <iostream>

std::string	toLower(std::string s)
{
	std::string str;
	char c;
	for (size_t i = 0; i < s.length(); i++)
	{
		c = tolower(static_cast<int>(s[i]));
		str.push_back(c);
	}

	return (str);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Usage is: ./harl <level>\n";
		return (1);
	}
	Harl	harl;
	
	std::string	command	= toLower(argv[1]);
	harl.complain(command);
	return (0);
}
