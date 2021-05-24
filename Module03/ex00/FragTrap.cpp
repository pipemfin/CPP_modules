#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name)
{
	std::cout << "\033[1;41;37m*FR4G-TP " << name << " is here and ready to fight! beep-beep-beeeeeeep*\033[0m" << std::endl;
	this->_name = name;
	this->_hp = 100;
	this->_max_hp = 100;
	this->_ep = 100;
	this->_max_ep = 100;
	this->_level = 1;
	this->_melee_attack_damage = 30;
	this->_ranged_attack_damage = 20;
	this->_armor_damage_reduction = 5;
}

FragTrap::FragTrap(const FragTrap &fragtrap)
{
	this->_name = fragtrap._name;
	this->_hp = fragtrap._hp;
	this->_max_hp = fragtrap._max_hp;
	this->_ep = fragtrap._ep;
	this->_max_ep = fragtrap._max_ep;
	this->_level = fragtrap._level;
	this->_melee_attack_damage = fragtrap._melee_attack_damage;
	this->_ranged_attack_damage = fragtrap._ranged_attack_damage;
	this->_armor_damage_reduction = fragtrap._armor_damage_reduction;
}

FragTrap& FragTrap::operator=(const FragTrap &fragtrap)
{
	if (this == &fragtrap)
		return (*this);
	this->_name = fragtrap._name;
	this->_hp = fragtrap._hp;
	this->_max_hp = fragtrap._max_hp;
	this->_ep = fragtrap._ep;
	this->_max_ep = fragtrap._max_ep;
	this->_level = fragtrap._level;
	this->_melee_attack_damage = fragtrap._melee_attack_damage;
	this->_ranged_attack_damage = fragtrap._ranged_attack_damage;
	this->_armor_damage_reduction = fragtrap._armor_damage_reduction;
	return (*this);
}

void	FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "\033[1;32mFR4G-TP " << this->_name << "\033[0m attacks \033[1;31m" << target << "\033[0m at range, causing \033[1;31m" << this->_ranged_attack_damage << " points of damage!\033[0m" << std::endl;
}

void	FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "\033[1;32mFR4G-TP " << this->_name << "\033[0m attacks \033[1;31m" << target << "\033[0m at melee, causing \033[1;31m" << this->_melee_attack_damage << " points of damage!\033[0m" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	unsigned int damage;

	damage = amount - this->_armor_damage_reduction;
	std::cout << "\033[1;32mFR4G-TP " << this->_name << "\033[0m is get's \033[1;31m" << damage << " points of damage!\033[0m" << std::endl;
	if ((this->_hp - damage) < 0)
		this->_hp = 0;
	this->_hp -= damage;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	unsigned int healed_hp;

	if ((this->_hp + amount) > this->_max_hp)
		healed_hp = this->_max_hp - this->_hp;
	else
		healed_hp = amount;
	std::cout << "\033[1;32mFR4G-TP " << this->_name << "\033[0m is \033[1;34mheal " << healed_hp << " hit points!\033[0m" << std::endl;
	this->_hp += healed_hp;
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
		std::cout << "\033[1;32mFR4G-TP " << this->_name << "\033[0m: i don't have enough energy to special attack!" << std::endl;
		return ;
	}
	if (rand_numb == 4)
	{
		std::cout << "\033[1;32mFR4G-TP " << this->_name << "\033[0m activating fifth directive: dance. *beep-beep-beeeeeeep*" << std::endl;
		std::cout << "\033[5;33mIiiii-ha-aaa-a-a-a. \033[1;31;25m" << target << "\033[5;22;33m clapping and dancing...\033[0m" << std::endl;
	}
	else
		std::cout << "\033[1;32mFR4G-TP " << this->_name << "\033[0m activating " << attack_array[rand_numb] << " \033[1;31m" << target  << " receive " << rand()%50 << " points of damage.\033[0m" << std::endl;
	this->_ep -= 25;
}

FragTrap::~FragTrap()
{
	std::cout << "\033[1;41;37m*FR4G-TP " << this->_name << " utters a death moan!*\033[0m" << std::endl;
}