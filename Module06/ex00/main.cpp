#include <iostream>
#include <limits>
#include <string>

int		handle_error(int argc, char **argv)
{
	if (argc > 2 or argc < 2)
	{
		std::cout << "Invalid count of input parametrs!" << std::endl;
		return (1);
	}
	if (argv[1] == NULL || !strlen(argv[1]))
	{
		std::cout << "Invalid parametrs in input!" << std::endl;
		return (1);
	}
	return (0);
}

void	display_char(double doubled)
{
	char	character;
	
	if (doubled < std::numeric_limits<char>::max() and doubled >= std::numeric_limits<char>::min())
		character = static_cast<char>(doubled);
	else
	{
		std::cout << "char: impossible" << std::endl;
		return ;
	}
	if (character < 32 || character > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << character << "'"<< std::endl;
}

void	display_int(double doubled)
{
	int integer = 0;
	if (doubled < std::numeric_limits<int>::max() and doubled >= std::numeric_limits<int>::min())
		integer = static_cast<int>(doubled);
	else
	{
		std::cout << "int: impossible" << std::endl;
		return ;
	}
	std::cout << "int: " << integer << std::endl;
}

void	display_float(double doubled)
{
	float floating = 0;
	std::cout.setf(std::ios::fixed);
	std::cout.precision(1);
	if ((doubled < std::numeric_limits<float>::max() and doubled >= std::numeric_limits<float>::min())
	 or (-doubled < std::numeric_limits<float>::max() and -doubled >= std::numeric_limits<float>::min())
	 or (doubled != doubled) or (doubled == std::numeric_limits<double>::infinity())
	 or (-doubled == std::numeric_limits<double>::infinity()))
		floating = static_cast<float>(doubled);
	else
	{
		std::cout << "float: impossible" << std::endl;
		return ;
	}
	std::cout << "float: " << floating << "f" << std::endl;
}

int		main(int argc, char **argv)
{
	if (handle_error(argc, argv))
		return (1);
	double doublen = 0;
	try
	{
		doublen = std::stod(argv[1]);
		display_char(doublen);
		display_int(doublen);
		display_float(doublen);
		std::cout << "double: " << doublen << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
	}
	return (0);
}