#include <iostream>
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

void	display_char(char *string)
{
	int		integer;
	char	character;
	try
	{
		integer = std::stoi(string);
	}
	catch(const std::exception& e)
	{
		std::cout << "char: impossible" << std::endl;
		return ;
	}
	character = static_cast<char>(integer);
	if (character < 32 || character > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << character << "'"<< std::endl;
}

void	display_int(char *string)
{
	int integer = 0;
	try
	{
		integer = std::stoi(string);
	}
	catch(const std::exception& e)
	{
		std::cout << "int: impossible" << std::endl;
		return ;
	}
	std::cout << "int: " << integer << std::endl;
}

void	display_float(char *string)
{
	float floating = 0;
	std::cout.setf(std::ios::fixed);
	std::cout.precision(1);
	try
	{
		floating = std::stof(string);
	}
	catch(const std::exception& e)
	{
		std::cout << "float: impossible" << std::endl;
		return ;
	}
	std::cout << "float: " << floating << "f" << std::endl;
}

void	display_double(char *string)
{
	double doublen = 0;
	try
	{
		doublen = std::stod(string);
	}
	catch(const std::exception& e)
	{
		std::cout << "double: impossible" << std::endl;
		return ;
	}
	std::cout << "double: " << doublen << std::endl;
}

int		main(int argc, char **argv)
{
	if (handle_error(argc, argv))
		return (1);
	display_char(argv[1]);
	display_int(argv[1]);
	display_float(argv[1]);
	display_double(argv[1]);
	return (0);
}