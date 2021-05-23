#include "Weapon.hpp"

Weapon::Weapon()
{
	this->_type = "Dildo";
}

Weapon::Weapon(std::string type)
{
	this->_type = type;
}

void Weapon::setType(std::string type)
{
	this->_type = type;
}

void Weapon::printType()
{
	std::cout << _type << std::endl;
}

const std::string &Weapon::getType(void)
{
	return (_type);
}