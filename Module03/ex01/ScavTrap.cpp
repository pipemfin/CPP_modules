#include "ScavTrap.hpp"
#include <string>

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "\033[1;41;37m*SC4V-TP " << name << " is here and ready to fight! beep-beep-beeeeeeep*\033[0m" << std::endl;
	this->_name = name;
	this->_hp = 100;
	this->_max_hp = 100;
	this->_ep = 50;
	this->_max_ep = 50;
	this->_level = 1;
	this->_melee_attack_damage = 20;
	this->_ranged_attack_damage = 15;
	this->_armor_damage_reduction = 3;
}

ScavTrap::ScavTrap(const ScavTrap &scavtrap)
{
	this->_name = scavtrap._name;
	this->_hp = scavtrap._hp;
	this->_max_hp = scavtrap._max_hp;
	this->_ep = scavtrap._ep;
	this->_max_ep = scavtrap._max_ep;
	this->_level = scavtrap._level;
	this->_melee_attack_damage = scavtrap._melee_attack_damage;
	this->_ranged_attack_damage = scavtrap._ranged_attack_damage;
	this->_armor_damage_reduction = scavtrap._armor_damage_reduction;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &scavtrap)
{
	if (this == &scavtrap)
		return (*this);
	this->_name = scavtrap._name;
	this->_hp = scavtrap._hp;
	this->_max_hp = scavtrap._max_hp;
	this->_ep = scavtrap._ep;
	this->_max_ep = scavtrap._max_ep;
	this->_level = scavtrap._level;
	this->_melee_attack_damage = scavtrap._melee_attack_damage;
	this->_ranged_attack_damage = scavtrap._ranged_attack_damage;
	this->_armor_damage_reduction = scavtrap._armor_damage_reduction;
	return (*this);
}

void	ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "\033[1;32mSC4V-TP " << this->_name << "\033[0m attacks \033[1;31m" << target << "\033[0m at range, causing \033[1;31m" << this->_ranged_attack_damage << " points of damage!\033[0m" << std::endl;
}

void	ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "\033[1;32mSC4V-TP " << this->_name << "\033[0m attacks \033[1;31m" << target << "\033[0m at melee, causing \033[1;31m" << this->_melee_attack_damage << " points of damage!\033[0m" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	unsigned int damage;

	damage = amount - this->_armor_damage_reduction;
	std::cout << "\033[1;32mSC4V-TP " << this->_name << "\033[0m is get's \033[1;31m" << damage << " points of damage!\033[0m" << std::endl;
	if ((this->_hp - damage) < 0)
		this->_hp = 0;
	this->_hp -= damage;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	unsigned int healed_hp;

	if ((this->_hp + amount) > this->_max_hp)
		healed_hp = this->_max_hp - this->_hp;
	else
		healed_hp = amount;
	std::cout << "\033[1;32mSC4V-TP " << this->_name << "\033[0m is \033[1;34mheal " << healed_hp << " hit points!\033[0m" << std::endl;
	this->_hp += healed_hp;
}

void	ScavTrap::challengeNewcomer()
{
	std::string challenge_array[5] = {"starts rolling around you and making loud noises", "starts cleaning his exhaust pipe",
		"falls pretending to be dead" , "leaves for sunset", "creates an energy shield and hits the wall with the shield"};

	std::cout << "\033[1;32mSC4V-TP " << this->_name << "\033[0m is \033[1;34m" << challenge_array[rand()%5] << "\033[0m"<< std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "\033[1;41;37m*SC4V-TP " << this->_name << " utters a death moan*!\033[0m" << std::endl;
}