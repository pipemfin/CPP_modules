#include	"ScavTrap.hpp"
#include	<string>
#include	<iostream>

ScavTrap::ScavTrap(std::string name)  : ClapTrap(name)
{
	std::cout << this->_type << " " << this->_name << " to SC4V-TP update in progress!" << std::endl;
	this->_type = "SC4V-TP";
	this->_hp = 100;
	this->_max_hp = 100;
	this->_ep = 50;
	this->_max_ep = 50;
	this->_level = 1;
	this->_melee_attack_damage = 20;
	this->_ranged_attack_damage = 15;
	this->_armor_damage_reduction = 3;
}

void	ScavTrap::challengeNewcomer()
{
	std::string challenge_array[5] = {"starts rolling around you and making loud noises", "starts cleaning his exhaust pipe",
		"falls pretending to be dead" , "leaves for sunset", "creates an energy shield and hits the wall with the shield"};

	std::cout << "\033[1;32m" << this->_type << " " << this->_name << "\033[0m is \033[1;34m" << challenge_array[rand()%5] << "\033[0m"<< std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << this->_type << " " << this->_name << " destroying in progress" << std::endl;
}