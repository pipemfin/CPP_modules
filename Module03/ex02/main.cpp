#include	<string>
#include	<iostream>
#include	"ClapTrap.hpp"
#include	"FragTrap.hpp"
#include	"ScavTrap.hpp"

int main(void)
{
	FragTrap Ninja("Ninja");
	ScavTrap Ronin("Ronin");

	srand(time(0));
	Ninja.beRepaired(10);
	Ninja.takeDamage(30);
	Ninja.rangedAttack("Dragon");
	Ninja.meleeAttack("Adolph");
	Ninja.vaulthunter_dot_exe("Someone");
	Ninja.vaulthunter_dot_exe("Someone");
	Ninja.vaulthunter_dot_exe("Someone");
	Ninja.vaulthunter_dot_exe("Someone");
	Ninja.vaulthunter_dot_exe("Someone");

	Ronin.beRepaired(10);
	Ronin.takeDamage(30);
	Ronin.rangedAttack("Dragon");
	Ronin.meleeAttack("Adolph");
	Ronin.challengeNewcomer();
	Ronin.challengeNewcomer();
	Ronin.challengeNewcomer();
	Ronin.challengeNewcomer();
	Ronin.challengeNewcomer();

	return (0);
}