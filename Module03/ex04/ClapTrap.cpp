#include "ClapTrap.hpp"
#include <string>

ClapTrap::ClapTrap(std::string name)
{
	this->_type = "CL4P-TP";
	this->_name = name;
	std::cout << "\033[1;41;37m* Creating new robot of "<< this->_type << " type *\033[0m" << std::endl;
	this->_hp = 100;
	this->_max_hp = 100;
	this->_ep = 100;
	this->_max_ep = 100;
	this->_level = 1;
	this->_melee_attack_damage = 30;
	this->_ranged_attack_damage = 20;
	this->_armor_damage_reduction = 5;
}

ClapTrap::ClapTrap(const ClapTrap &claptrap)
{
	this->_name = claptrap._name;
	this->_hp = claptrap._hp;
	this->_max_hp = claptrap._max_hp;
	this->_ep = claptrap._ep;
	this->_max_ep = claptrap._max_ep;
	this->_level = claptrap._level;
	this->_melee_attack_damage = claptrap._melee_attack_damage;
	this->_ranged_attack_damage = claptrap._ranged_attack_damage;
	this->_armor_damage_reduction = claptrap._armor_damage_reduction;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &claptrap)
{
	if (this == &claptrap)
		return (*this);
	this->_name = claptrap._name;
	this->_hp = claptrap._hp;
	this->_max_hp = claptrap._max_hp;
	this->_ep = claptrap._ep;
	this->_max_ep = claptrap._max_ep;
	this->_level = claptrap._level;
	this->_melee_attack_damage = claptrap._melee_attack_damage;
	this->_ranged_attack_damage = claptrap._ranged_attack_damage;
	this->_armor_damage_reduction = claptrap._armor_damage_reduction;
	return (*this);
}

void	ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << "\033[1;32m" << this->_type << " " << this->_name << "\033[0m attacks \033[1;31m" << target << "\033[0m at range, causing \033[1;31m" << this->_ranged_attack_damage << " points of damage!\033[0m" << std::endl;
}

void	ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << "\033[1;32m" << this->_type << " " << this->_name << "\033[0m attacks \033[1;31m" << target << "\033[0m at melee, causing \033[1;31m" << this->_melee_attack_damage << " points of damage!\033[0m" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	unsigned int damage;

	damage = amount - this->_armor_damage_reduction;
	std::cout << "\033[1;32m" << this->_type << " " << this->_name << "\033[0m is get's \033[1;31m" << damage << " points of damage!\033[0m" << std::endl;
	if ((this->_hp - damage) < 0)
		this->_hp = 0;
	this->_hp -= damage;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	unsigned int healed_hp;

	if ((this->_hp + amount) > this->_max_hp)
		healed_hp = this->_max_hp - this->_hp;
	else
		healed_hp = amount;
	std::cout << "\033[1;32m" << this->_type << " " << this->_name << "\033[0m is \033[1;34mheal " << healed_hp << " hit points!\033[0m" << std::endl;
	this->_hp += healed_hp;
}

std::string ClapTrap::getName()
{
	return (this->_name);
}

ClapTrap::~ClapTrap()
{
	std::cout << "\033[1;41;37m* " << this->_type << " " << this->_name << " utters a death moan!*\033[0m" << std::endl;
}