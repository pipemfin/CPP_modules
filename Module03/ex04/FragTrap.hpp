#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include	<string>
#include	<iostream>
#include	"ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
public:
	FragTrap(std::string name);

	void	vaulthunter_dot_exe(std::string const & target);

	~FragTrap();
};

#endif