#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include	<string>
#include	<iostream>

class FragTrap
{
private:
	unsigned int	_hp;
	unsigned int	_max_hp;
	unsigned int	_ep;
	unsigned int	_max_ep;
	unsigned int	_level;
	std::string		_name;
	unsigned int	_melee_attack_damage;
	unsigned int	_ranged_attack_damage;
	unsigned int	_armor_damage_reduction;
	FragTrap();

public:
	FragTrap(std::string name);
	FragTrap(const FragTrap &fragtrap);
	FragTrap& operator=(const FragTrap &fragtrap);

	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	vaulthunter_dot_exe(std::string const & target);
	
	~FragTrap();

};

#endif