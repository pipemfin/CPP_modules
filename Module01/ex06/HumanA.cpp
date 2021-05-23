#include "HumanA.hpp"

HumanA::HumanA(std::string name, class Weapon &weapon) : _weapon(weapon)
{
	this->_name = name;
}

void HumanA::attack()
{
	std::cout << _name << " attacks with his " << _weapon.getType() << std::endl;
}