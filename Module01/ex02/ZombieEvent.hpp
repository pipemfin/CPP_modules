#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

#include <iostream>
#include <cstdlib>
#include "Zombie.hpp"

class ZombieEvent
{
private:
	std::string _type;

public:

	void setZombieType(std::string type);
	Zombie* newZombie(std::string name);
	void randomChump();
};

#endif