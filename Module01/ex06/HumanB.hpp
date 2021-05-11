#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
private:
	std::string		_name;
	class Weapon	*_weapon;

public:
	HumanB(std::string name)
	{
		this->_name = name;
	}

	void setWeapon(class Weapon weapon)
	{
		this->_weapon = &weapon;
	}

	void attack()
	{
		std::cout << _name << "attacks with his" << (*_weapon).getType() << std::endl;
	}
};

#endif