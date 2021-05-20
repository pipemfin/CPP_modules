#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
private:
	std::string	_first_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string	_login;
	std::string	_postal_adress;
	std::string	_phone_number;
	std::string	_birthday_date;
	std::string	_favorite_meal;
	std::string	_underwear_color;
	std::string	_darkest_secret;

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