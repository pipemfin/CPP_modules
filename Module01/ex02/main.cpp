#include <iostream>
#include "ZombieEvent.hpp"

int		main(void)
{
	ZombieEvent Monolit;

	Monolit.setZombieType("death");
	Zombie *SomeZombie = Monolit.newZombie("Artur");
	SomeZombie->announce();
	delete SomeZombie;
	Monolit.randomChump();
	while(1)
		continue;
}