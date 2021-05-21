#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include	<string>
#include	<iostream>
#include	"ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
public:
	ScavTrap(std::string name);

	void	challengeNewcomer();

	~ScavTrap();
};

#endif