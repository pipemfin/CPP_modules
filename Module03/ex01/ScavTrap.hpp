#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include	<string>
#include	<iostream>

class ScavTrap
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
	ScavTrap();

public:
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &fragtrap);
	ScavTrap& operator=(const ScavTrap &fragtrap);

	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	challengeNewcomer();
	
	~ScavTrap();
};

#endif