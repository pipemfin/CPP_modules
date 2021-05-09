#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
private:
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	login;
	std::string	postal_adress;
	std::string	phone_number;
	std::string	birthday_date;
	std::string	favorite_meal;
	std::string	underwear_color;
	std::string	darkest_secret;

public:

	void set_first_name(std::string string) 	{	first_name = string;		}

	void set_last_name(std::string string)		{	last_name = string;			}

	void set_nickname(std::string string)		{	nickname = string;			}

	void set_login(std::string string)			{	login = string;				}

	void set_postal_adress(std::string string)	{	postal_adress = string;		}

	void set_phone_number(std::string string)	{	phone_number = string;		}

	void set_birthday_date(std::string string)	{	birthday_date = string;		}

	void set_favorite_meal(std::string string)	{	favorite_meal = string;		}

	void set_underwear_color(std::string string){	underwear_color = string;	}

	void set_darkest_secret(std::string string)	{	darkest_secret = string;	}

	std::string get_first_name()				{	return (first_name);		}

	std::string get_last_name()					{	return (last_name);			}

	std::string get_nickname()					{	return (nickname);			}

	std::string get_login()						{	return (login);				}

	std::string get_postal_adress()				{	return (postal_adress);		}

	std::string get_phone_number()				{	return (phone_number);		}

	std::string get_birthday_date()				{	return (birthday_date);		}

	std::string get_favorite_meal()				{	return (favorite_meal);		}

	std::string get_underwear_color()			{	return (underwear_color);	}

	std::string get_darkest_secret()			{	return (darkest_secret);	}
};


class Phonebook
{
private:
	int			number_of_contacts;
	Contact		book[8];

public:

	Phonebook()		{	number_of_contacts = 0;	}

	int		get_number_of_contacts() {	return (number_of_contacts);	}

	int		add_contacts()
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

	void	print_full_contact(int i)
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

	void	print_part_contact(Contact contact)
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

	void	set_contact(int i)
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

	void	print_contact_list()
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
};

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