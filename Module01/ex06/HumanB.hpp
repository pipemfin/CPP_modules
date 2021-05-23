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
	HumanB(std::string name);

	void setWeapon(class Weapon &weapon);

	void attack();
};

#endif