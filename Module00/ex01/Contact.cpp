#include "Contact.hpp"

void Contact::set_first_name(std::string string) 		{	first_name = string;		}
void Contact::set_last_name(std::string string)			{	last_name = string;			}
void Contact::set_nickname(std::string string)			{	nickname = string;			}
void Contact::set_login(std::string string)				{	login = string;				}
void Contact::set_postal_adress(std::string string)		{	postal_adress = string;		}
void Contact::set_phone_number(std::string string)		{	phone_number = string;		}
void Contact::set_birthday_date(std::string string)		{	birthday_date = string;		}
void Contact::set_favorite_meal(std::string string)		{	favorite_meal = string;		}
void Contact::set_underwear_color(std::string string)	{	underwear_color = string;	}
void Contact::set_darkest_secret(std::string string)	{	darkest_secret = string;	}

std::string Contact::get_first_name()					{	return (first_name);		}
std::string Contact::get_last_name()					{	return (last_name);			}
std::string Contact::get_nickname()						{	return (nickname);			}
std::string Contact::get_login()						{	return (login);				}
std::string Contact::get_postal_adress()				{	return (postal_adress);		}
std::string Contact::get_phone_number()					{	return (phone_number);		}
std::string Contact::get_birthday_date()				{	return (birthday_date);		}
std::string Contact::get_favorite_meal()				{	return (favorite_meal);		}
std::string Contact::get_underwear_color()				{	return (underwear_color);	}
std::string Contact::get_darkest_secret()				{	return (darkest_secret);	}