#include	"FragTrap.hpp"
#include	<string>
#include	<iostream>

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << this->_type << " " << this->_name << " to FR4G-TP update in progress!" << std::endl;
	this->_type = "FR4G-TP";
	this->_hp = 100;
	this->_max_hp = 100;
	this->_ep = 100;
	this->_max_ep = 100;
	this->_level = 1;
	this->_melee_attack_damage = 30;
	this->_ranged_attack_damage = 20;
	this->_armor_damage_reduction = 5;
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	int	rand_numb;
	std::string attack_array[4] = {"first directive: summon napalm airstrike.", 
	"second directive: light machine gun fire." , "third directive: sound attack. Turn on Philip Kirkorov's track.",
	"fourth directive: hacking the enemy's life support system."};

	rand_numb = rand()%5;
	if (this->_ep < 25)
	{
		std::cout << "\033[1;32m" << this->_type << " " << this->_name << "\033[0m: i don't have enough energy to special attack!" << std::endl;
		return ;
	}
	if (rand_numb == 4)
	{
		std::cout << "\033[1;32m" << this->_type << " " << this->_name << "\033[0m activating fifth directive: dance. *beep-beep-beeeeeeep*" << std::endl;
		std::cout << "\033[5;33mIiiii-ha-aaa-a-a-a. \033[1;31;25m" << target << "\033[5;22;33m clapping and dancing...\033[0m" << std::endl;
	}
	else
		std::cout << "\033[1;32m" << this->_type << " " << this->_name << "\033[0m activating " << attack_array[rand_numb] << " \033[1;31m" << target  << " receive " << rand()%50 << " points of damage.\033[0m" << std::endl;
	this->_ep -= 25;
}

FragTrap::~FragTrap()
{
	std::cout << this->_type << " " << this->_name << " destroying in progress" << std::endl;
}