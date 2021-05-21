#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name) : ClapTrap(name), FragTrap(name), NinjaTrap(name)
{
	std::cout << this->_type << " " << this->_name << " to SU4P-TP update in progress!" << std::endl;
	this->_type = "SU4P-TP";
	this->_hp = 100;
	this->_max_hp = 100;
	this->_ranged_attack_damage = 20;
	this->_armor_damage_reduction = 5;
}

void	SuperTrap::rangedAttack(std::string const & target)
{
	FragTrap::rangedAttack(target);
}

void	SuperTrap::meleeAttack(std::string const & target)
{
	NinjaTrap::meleeAttack(target);
}

void	SuperTrap::printStats()
{
	std::cout << "_______________________" << std::endl;
	std::cout << "name: " << this->_name << std::endl;
	std::cout << "type: " << this->_type << std::endl;
	std::cout << "hp: " << this->_hp << std::endl;
	std::cout << "maxhp: " << this->_max_hp << std::endl;
	std::cout << "ep: " << this->_ep << std::endl;
	std::cout << "maxep: " << this->_max_ep << std::endl;
	std::cout << "lvl: " << this->_level<< std::endl;
	std::cout << "melee_attack_damage: " <<this->_melee_attack_damage << std::endl;
	std::cout << "ranged_attack_damage: " <<this->_ranged_attack_damage << std::endl;
	std::cout << "armor_damage_reduction: " <<this->_armor_damage_reduction << std::endl;
	std::cout << "_______________________" << std::endl;
}

SuperTrap::~SuperTrap()
{
	std::cout << this->_type << " " << "SuperDie for SuperTrap!!!!!" << std::endl;
}