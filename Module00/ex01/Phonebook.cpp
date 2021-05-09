#include "Phonebook.hpp"

int		Phonebook::get_number_of_contacts()
{	
	return (number_of_contacts);	
}

int		Phonebook::add_contacts()
{
	std::string command;
	int			i;

	i = -1;
	if (number_of_contacts < 8)
		set_contact(number_of_contacts++);
	else
		return (1);
	return (0);
}

void	Phonebook::print_full_contact(int i)
{
	std::cout << std::setw(20) << "First name:|" << book[i].get_first_name() << '|' << std::endl;
	std::cout << std::setw(20) << "Last name:|" << book[i].get_last_name() << '|' << std::endl;
	std::cout << std::setw(20) << "Nickname:|" << book[i].get_nickname() << '|' << std::endl;
	std::cout << std::setw(20) << "Login:|" << book[i].get_login() << '|' << std::endl;
	std::cout << std::setw(20) << "Postal adress:|" << book[i].get_postal_adress() << '|' << std::endl;
	std::cout << std::setw(20) << "Phone number:|" << book[i].get_phone_number() << '|' << std::endl;
	std::cout << std::setw(20) << "Birthday date:|" << book[i].get_birthday_date() << '|' << std::endl;
	std::cout << std::setw(20) << "Favorite meal:|" << book[i].get_favorite_meal() << '|' << std::endl;
	std::cout << std::setw(20) << "Underwear color:|" << book[i].get_underwear_color() << '|' << std::endl;
	std::cout << std::setw(20) << "Darkest secret:|" << book[i].get_darkest_secret() << '|' << std::endl;
}

void	Phonebook::print_part_contact(Contact contact)
{
	if (contact.get_first_name().size() > 10)
		std::cout << "|" << std::setw(10) << contact.get_first_name().substr(0,9) + '.';
	else
		std::cout << "|" << std::setw(10) << contact.get_first_name();
	if (contact.get_last_name().size() > 10)
		std::cout << "|" << std::setw(10) << contact.get_last_name().substr(0,9) + '.';
	else
		std::cout << "|" << std::setw(10) << contact.get_last_name();
	if (contact.get_nickname().size() > 10)
		std::cout << "|" << std::setw(10) << contact.get_nickname().substr(0,9) + '.' << "|" << std::endl;
	else
		std::cout << "|" << std::setw(10) << contact.get_nickname() << "|" << std::endl;
}

void	Phonebook::set_contact(int i)
{
	std::string	command;

	std::cout.fill('-');
	std::cout << std::setw(44) << std::left << "|Enter first name" << "|" << std::endl;
	std::getline(std::cin, command);
	book[i].set_first_name(command);
	std::cout << std::setw(44)<< std::left << "|Enter last name" << "|" << std::endl;
	std::getline(std::cin, command);
	book[i].set_last_name(command);
	std::cout << std::setw(44) << std::left << "|Enter nickname" << "|" << std::endl;
	std::getline(std::cin, command);
	book[i].set_nickname(command);
	std::cout << std::setw(44) << std::left << "|Enter login" << "|" << std::endl;
	std::getline(std::cin, command);
	book[i].set_login(command);
	std::cout << std::setw(44) << std::left << "|Enter postal adress" << "|" << std::endl;
	std::getline(std::cin, command);
	book[i].set_postal_adress(command);
	std::cout << std::setw(44) << std::left << "|Enter phone number" << "|" << std::endl;
	std::getline(std::cin, command);
	book[i].set_phone_number(command);
	std::cout << std::setw(44) << std::left << "|Enter birthday date" << "|" << std::endl;
	std::getline(std::cin, command);
	book[i].set_birthday_date(command);
	std::cout << std::setw(44) << std::left << "|Enter favorite meal" << "|" << std::endl;
	std::getline(std::cin, command);
	book[i].set_favorite_meal(command);
	std::cout << std::setw(44) << std::left << "|Enter underwear color" << "|" << std::endl;
	std::getline(std::cin, command);
	book[i].set_underwear_color(command);
	std::cout << std::setw(44) << std::left << "|Enter darkest secret" << "|" << std::endl << std::right;
	std::getline(std::cin, command);
	book[i].set_darkest_secret(command);
	std::cout.fill(' ');
	return ;
}

void	Phonebook::print_contact_list()
{
	int			i;
	std::string	command;

	i = -1;
	std::cout.fill('-');
	std::cout << "|" << std::setw(44) << "|" << std::endl; 
	std::cout.fill(' ');
	std::cout << "|" << std::setw(10) << "index";
	std::cout << "|" << std::setw(10) << "fname";
	std::cout << "|" << std::setw(10) << "lname";
	std::cout << "|" << std::setw(10) << "nickname" << '|' << std::endl;
	while(++i < number_of_contacts)
	{
		std::cout << "|" << std::setw(10) << i;
		print_part_contact(book[i]);
	}
	std::cout.fill('-');
	std::cout << "|" << std::setw(44) << "|" << std::endl;
	std::cout.fill(' ');
}