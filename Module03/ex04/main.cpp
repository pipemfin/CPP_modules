#include	<string>
#include	<iostream>
#include	"ClapTrap.hpp"
#include	"FragTrap.hpp"
#include	"NinjaTrap.hpp"
#include	"ScavTrap.hpp"
#include	"SuperTrap.hpp"

int main(void)
{
	srand(time(0));
	ClapTrap ClapTrap("ClapTrap");
	SuperTrap SuperTrap("SuperTrap");

	SuperTrap.meleeAttack("BadBoy");
	SuperTrap.ninjaShoebox(ClapTrap);
	SuperTrap.vaulthunter_dot_exe("Your ass");
	SuperTrap.printStats();
	return (0);
}