#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <string>
#include <iomanip>

class Phonebook
{
private:
	int			number_of_contacts;
	Contact		book[8];

public:

	Phonebook()		{	number_of_contacts = 0;	}

	int		get_number_of_contacts();
	int		add_contacts();
	void	print_full_contact(int i);
	void	print_part_contact(Contact contact);
	void	set_contact(int i);
	void	print_contact_list();
};

#endif