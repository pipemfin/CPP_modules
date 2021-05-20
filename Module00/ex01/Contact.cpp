#include "Contact.hpp"

void Contact::set_first_name(std::string string) 		{	_first_name = string;			}
void Contact::set_last_name(std::string string)			{	_last_name = string;			}
void Contact::set_nickname(std::string string)			{	_nickname = string;				}
void Contact::set_login(std::string string)				{	_login = string;				}
void Contact::set_postal_adress(std::string string)		{	_postal_adress = string;		}
void Contact::set_phone_number(std::string string)		{	_phone_number = string;			}
void Contact::set_birthday_date(std::string string)		{	_birthday_date = string;		}
void Contact::set_favorite_meal(std::string string)		{	_favorite_meal = string;		}
void Contact::set_underwear_color(std::string string)	{	_underwear_color = string;		}
void Contact::set_darkest_secret(std::string string)	{	_darkest_secret = string;		}

std::string Contact::get_first_name()					{	return (_first_name);			}
std::string Contact::get_last_name()					{	return (_last_name);			}
std::string Contact::get_nickname()						{	return (_nickname);				}
std::string Contact::get_login()						{	return (_login);				}
std::string Contact::get_postal_adress()				{	return (_postal_adress);		}
std::string Contact::get_phone_number()					{	return (_phone_number);			}
std::string Contact::get_birthday_date()				{	return (_birthday_date);		}
std::string Contact::get_favorite_meal()				{	return (_favorite_meal);		}
std::string Contact::get_underwear_color()				{	return (_underwear_color);		}
std::string Contact::get_darkest_secret()				{	return (_darkest_secret);		}