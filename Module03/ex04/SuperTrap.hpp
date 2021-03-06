#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
private:
	SuperTrap();
public:
	SuperTrap(std::string name);
	SuperTrap(const SuperTrap &supertrap);
	SuperTrap &operator=(const SuperTrap &supertrap);

	using FragTrap::rangedAttack;
	using NinjaTrap::meleeAttack;
	void	printStats();

	~SuperTrap();
};

#endif