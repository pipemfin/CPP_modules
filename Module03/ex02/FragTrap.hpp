#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include	<string>
#include	<iostream>
#include	"ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	FragTrap();
public:
	FragTrap(std::string name);
	FragTrap(const FragTrap &fragtrap);
	FragTrap &operator=(const FragTrap &fragtrap);

	void	vaulthunter_dot_exe(std::string const & target);

	~FragTrap();
};

#endif