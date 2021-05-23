#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP

#include <iostream>
#include <cstdlib>
#include "Zombie.hpp"

class ZombieHorde
{
private:
	std::string _type;
	Zombie*		_horde;
	int			_horde_size;

public:
	ZombieHorde(int horde_size);

	std::string give_name_zombie();

	~ZombieHorde();
};

#endif