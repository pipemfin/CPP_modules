#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name)
{
	std::cout << this->_type << " " << this->_name << " to INAC update in progress!" << std::endl;
	this->_type = "INAC";
	this->_hp = 60;
	this->_max_hp = 60;
	this->_ep = 120;
	this->_max_ep = 120;
	this->_level = 1;
	this->_melee_attack_damage = 60;
	this->_ranged_attack_damage = 5;
	this->_armor_damage_reduction = 0;
}

NinjaTrap::NinjaTrap(const NinjaTrap &ninjatrap)
{
	this->_type = ninjatrap._type;
	this->_hp = ninjatrap._hp;
	this->_max_hp = ninjatrap._max_hp;
	this->_ep = ninjatrap._ep;
	this->_max_ep = ninjatrap._max_ep;
	this->_level = ninjatrap._level;
	this->_melee_attack_damage = ninjatrap._melee_attack_damage;
	this->_ranged_attack_damage = ninjatrap._ranged_attack_damage;
	this->_armor_damage_reduction = ninjatrap._armor_damage_reduction;
}

NinjaTrap &NinjaTrap::operator=(const NinjaTrap &ninjatrap)
{
	if (this == &ninjatrap)
		return (*this);
	this->_type = ninjatrap._type;
	this->_hp = ninjatrap._hp;
	this->_max_hp = ninjatrap._max_hp;
	this->_ep = ninjatrap._ep;
	this->_max_ep = ninjatrap._max_ep;
	this->_level = ninjatrap._level;
	this->_melee_attack_damage = ninjatrap._melee_attack_damage;
	this->_ranged_attack_damage = ninjatrap._ranged_attack_damage;
	this->_armor_damage_reduction = ninjatrap._armor_damage_reduction;
	return (*this);
}

void	NinjaTrap::ninjaShoebox(ClapTrap &target)
{
	(void)target;
	std::cout << "Oh, God, this is the ancestor father!" << std::endl;
}

void	NinjaTrap::ninjaShoebox(FragTrap &target)
{
	(void)target;
	std::cout << "Prepare to die, you stupid piece of iron!" << std::endl;
}

void	NinjaTrap::ninjaShoebox(ScavTrap &target)
{
	(void)target;
	std::cout << "I will destroy you, useless scrap metal!" << std::endl;
}

void	NinjaTrap::ninjaShoebox(NinjaTrap &target)
{
	(void)target;
	std::cout << "\033[5;33mHello-o-o-o-o, my broooother!! \033[0m" << std::endl;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << this->_type << " " << this->_name << " disappears like a ninja!" << std::endl;
}