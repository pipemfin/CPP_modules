#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include	<string>
#include	<iostream>

class ClapTrap
{
protected:
	std::string		_type;
	unsigned int	_hp;
	unsigned int	_max_hp;
	unsigned int	_ep;
	unsigned int	_max_ep;
	unsigned int	_level;
	std::string		_name;
	unsigned int	_melee_attack_damage;
	unsigned int	_ranged_attack_damage;
	unsigned int	_armor_damage_reduction;

public:
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &claptrap);
	ClapTrap& operator=(const ClapTrap &claptrap);

	void		rangedAttack(std::string const & target);
	void		meleeAttack(std::string const & target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	std::string	getName();

	~ClapTrap();
};

#endif