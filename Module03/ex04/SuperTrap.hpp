#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
public:
	SuperTrap(std::string name);

	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	printStats();

	~SuperTrap();
};

#endif