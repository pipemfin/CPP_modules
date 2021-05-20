#include "FragTrap.hpp"
#include "ScavTrap.hpp"


int main(void)
{
	srand(time(0));
	FragTrap Ninja("Ninja");
	ScavTrap Ronin("Ronin");
	Ninja.meleeAttack("Pony");
	Ninja.rangedAttack("Zombie");
	Ninja.takeDamage(20);
	Ninja.beRepaired(25);
	Ninja.vaulthunter_dot_exe("Redneck");
	Ronin.meleeAttack("Pony");
	Ronin.rangedAttack("Zombie");
	Ronin.takeDamage(20);
	Ronin.beRepaired(25);
	Ronin.challengeNewcomer();
	Ronin.challengeNewcomer();
	Ronin.challengeNewcomer();
	Ronin.challengeNewcomer();
	return (0);
}