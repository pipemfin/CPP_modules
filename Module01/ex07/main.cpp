#include <fstream>
#include <iostream>
#include <string>

int		handle_error(int argc, char **argv)
{
	std::ifstream	file(argv[1]);

	if (!file)
	{
		if (!file)
			std::cout << "File " << argv[1] << " can't be open to read!" << std::endl;
		return (1);
	}
	if (argc > 4 or argc < 2)
	{
		std::cout << "Invalid count of input parametrs!" << std::endl;
		return (1);
	}
	if (argv[1] == NULL || argv[2] == NULL || argv[3] == NULL || !strlen(argv[2]) || !strlen(argv[3]))
	{
		std::cout << "Invalid parametrs in input!" << std::endl;
		return (1);
	}
	return (0);
}

void	process_string(char **argv, std::string &string)
{
	int a;
	int s1len;
	int s2len;

	a = 0;
	s1len = strlen(argv[2]);
	s2len = strlen(argv[3]);
	while ((a = string.find(argv[2], a)) >= 0)
	{
		string.replace(a, s1len, argv[3]);
		a = a + s2len;
	}
}

int		process_input_file(char **argv)
{
	std::ifstream	file(argv[1]);
	std::string		filereplace = argv[1];
	filereplace.append(".replace");
	std::ofstream	replace(filereplace);
	std::string		string;

	if (!replace)
	{
		if (!replace)
			std::cout << "File " << filereplace << " can't be open to write!" << std::endl;
		return (1);
	}
	while ((getline(file, string)))
	{
		process_string(argv, string);
		replace << string;
		if (!file.eof())
			replace << std::endl;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	if (handle_error(argc, argv))
		return (1);
	if (process_input_file(argv))
		return (1);
	return (0);
}