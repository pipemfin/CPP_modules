#ifndef CONTACT_HPP
#define CONTACT_HPP

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

	void set_first_name(std::string string);
	void set_last_name(std::string string);
	void set_nickname(std::string string);
	void set_login(std::string string);
	void set_postal_adress(std::string string);
	void set_phone_number(std::string string);
	void set_birthday_date(std::string string);
	void set_favorite_meal(std::string string);
	void set_underwear_color(std::string string);
	void set_darkest_secret(std::string string);

	std::string get_first_name();
	std::string get_last_name();
	std::string get_nickname();
	std::string get_login();
	std::string get_postal_adress();
	std::string get_phone_number();
	std::string get_birthday_date();
	std::string get_favorite_meal();
	std::string get_underwear_color();
	std::string get_darkest_secret();
};

#endif