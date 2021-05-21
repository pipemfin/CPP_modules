#include	<string>
#include	<iostream>
#include	"ClapTrap.hpp"
#include	"FragTrap.hpp"
#include	"NinjaTrap.hpp"
#include	"ScavTrap.hpp"

int main(void)
{
	ClapTrap ClapTrap("ClapTrap");
	FragTrap FragTrap("FragTrap");
	ScavTrap ScavTrap("ScavTrap");
	NinjaTrap Warrior("Warrior");
	NinjaTrap NinjaTrap("NinjaTrap");

	Warrior.ninjaShoebox(ClapTrap);
	Warrior.ninjaShoebox(FragTrap);
	Warrior.ninjaShoebox(ScavTrap);
	Warrior.ninjaShoebox(NinjaTrap);
	return (0);
}