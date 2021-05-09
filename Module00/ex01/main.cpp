#include <iostream>
#include <string>
#include <iomanip>
#include "Phonebook.hpp"

int		check_string_for_digits(std::string command)
{
	int i;

	i = -1;
	if (command.size() < 1)
		return (-1);
	while (command[++i])
	{
		if (!isdigit(command[i]))
			return (-1);
	}
	return (std::stoi(command));
}

void	print_other_inscription()
{
	std::cout.fill('-');
	std::cout << "|" << std::setw(43) << "Select index of contact" << "|" << std::endl;
	std::cout << "|" << std::setw(43) << "that you want to view in full" << "|" << std::endl;
	std::cout.fill(' ');
}

void	add_contacts(Phonebook *phonebook)
{
	int			i;
	std::string	command;

	if ((*phonebook).add_contacts() == 0)
		return ;
	std::cout.fill('-');
	std::cout << '|' << std::setw(44) << "Contact list full!|" << std::endl;
	std::cout << '|' << std::setw(44) << "Please, select index of contact|" << std::endl;
	std::cout << '|' << std::setw(44) << "that you want to replace:|" << std::endl;
	std::cout.fill(' ');
	(*phonebook).print_contact_list();
	std::getline(std::cin, command);
	i = check_string_for_digits(command);
	if (i < 0 or i > 7)
		std::cout << '|' << std::setw(44) << "Bad input data!" << std::endl;
	else
		(*phonebook).set_contact(i);
	std::cout.fill('-');
	std::cout << "|" << std::setw(44) << "|" << std::endl;
	std::cout.fill(' ');
}

void	search_contacts(Phonebook *phonebook)
{
	int			i;
	std::string	command;

	(*phonebook).print_contact_list();
	if ((*phonebook).get_number_of_contacts() > 0)
	{
		print_other_inscription();
		std::getline(std::cin, command);
		i = check_string_for_digits(command);
		if ((i < 0 or i > 7) or i >= (*phonebook).get_number_of_contacts())
			std::cout << '|' << std::setw(44) << "Bad input data!|" << std::endl;
		else
			(*phonebook).print_full_contact(i);
	}
	std::cout.fill('-');
	std::cout << "|" << std::setw(44) << "|" << std::endl;
	std::cout.fill(' ');
}

void	print_welcome_inscription()
{
	std::cout.fill('-');
	std::cout << "|" << std::setw(40) << "Hello, welcome to Phonebook v0.9.9.9!" << "---|" << std::endl;
	std::cout << "|" << std::setw(40) << "You can add and look added contacts" << "---|" << std::endl;
	std::cout << "|" << std::setw(39) << "Pay attention! Exit from Phonebook" << "----|" << std::endl;
	std::cout << "|" << std::setw(35) << "Will remove all contacts!" << "--------|" << std::endl;
	std::cout.fill('_');
	std::cout << "|" << std::setw(44) << "|" << std::endl;
	std::cout.fill(' ');
}

int		main(void)
{
	std::string	command;
	Phonebook	phonebook;

	print_welcome_inscription();
	std::cout << "|" << std::setw(44) << "Enter the command: ADD, SEARCH OR EXIT|" << std::endl;
	while (std::getline(std::cin, command))
	{
		if (!std::strcmp("ADD", &command[0]))
			add_contacts(&phonebook);
		else if (!std::strcmp("SEARCH", &command[0]))
			search_contacts(&phonebook);
		else if (!std::strcmp("EXIT", &command[0]) or !std::strcmp("EXIT", &command[0]))
		{
			std::cout << "|" << std::setw(44) << "!Goodbye!Goodbye!Goodbye!Goodbye!Goodbye!|" << std::endl;
			return(0);
		}
		else
			std::cout << "You entered wrong command! Please, try again!" << std::endl;
		std::cout << "|" << std::setw(44) << "Enter the command: ADD, SEARCH OR EXIT|" << std::endl;
	}
	return (0);
}