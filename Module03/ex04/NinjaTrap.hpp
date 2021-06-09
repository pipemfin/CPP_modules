#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{
private:
	NinjaTrap();
public:
	NinjaTrap(std::string name);
	NinjaTrap(const NinjaTrap &ninjatrap);
	NinjaTrap &operator=(const NinjaTrap &ninjatrap);

	void	ninjaShoebox(ClapTrap &target);
	void	ninjaShoebox(FragTrap &target);
	void	ninjaShoebox(ScavTrap &target);
	void	ninjaShoebox(NinjaTrap &target);

	~NinjaTrap();
};

#endif