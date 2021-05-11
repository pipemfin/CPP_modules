#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{
private:
	std::string		_name;
	class Weapon	&_weapon;

public:
	HumanA(std::string name, class Weapon &weapon) : _weapon(weapon)
	{
		this->_name = name;
	}

	void attack()
	{
		std::cout << _name << " attacks with his " << _weapon.getType() << std::endl;
	}
};

#endif