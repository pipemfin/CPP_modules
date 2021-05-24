#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include	<string>
#include	<iostream>
#include	"ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
	ScavTrap();
public:
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &scavtrap);
	ScavTrap &operator=(const ScavTrap &scavtrap);

	void	challengeNewcomer();

	~ScavTrap();
};

#endif