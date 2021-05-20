#include "FragTrap.hpp"

int main(void)
{
	srand(time(0));
	FragTrap Ninja("Ninja");
	Ninja.meleeAttack("Pony");
	Ninja.rangedAttack("Zombie");
	Ninja.takeDamage(20);
	Ninja.takeDamage(30);
	Ninja.beRepaired(25);
	Ninja.vaulthunter_dot_exe("Redneck");
	Ninja.vaulthunter_dot_exe("Redneck");
	Ninja.vaulthunter_dot_exe("Redneck");
	Ninja.vaulthunter_dot_exe("Redneck");
	Ninja.vaulthunter_dot_exe("Redneck");
	return (0);
}