#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon
{
private:
	std::string _type;

public:
	Weapon()
	{
		this->_type = "Dildo";
	}

	Weapon(std::string type)
	{
		this->_type = type;
	}

	void setType(std::string type)
	{
		this->_type = type;
	}

	void printType()
	{
		std::cout << _type << std::endl;
	}

	std::string &getType(void)
	{
		return (_type);
	}
};

#endif