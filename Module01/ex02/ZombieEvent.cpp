#include "ZombieEvent.hpp"

void ZombieEvent::setZombieType(std::string type)
{
	this->_type = type;
}

Zombie* ZombieEvent::newZombie(std::string name)
{
	Zombie *newzombie;
	newzombie = new Zombie(_type, name);
	return (newzombie);
}

void ZombieEvent::randomChump()
{
	srand(time(0));
	std::string _names[10] = {"Someone", "Adolph Hitler",
		"Stephen Hawking", "Flarit Faritovich", "Larry King", 
			"Pushkin Alexander", "Peter the Great", "ThatGuy",
				"Dmitri Ivanovich Mendeleev", "Maksim Marcenkevich"};
	Zombie anotherZombie(_type, _names[rand()%10]);
	anotherZombie.announce();
}