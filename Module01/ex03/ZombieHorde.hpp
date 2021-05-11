#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP

#include <iostream>
#include <cstdlib>
#include "Zombie.hpp"

class ZombieHorde
{
private:
	std::string _type;
	Zombie**	_horde;
	int			_horde_size;

public:

	ZombieHorde(int horde_size)
	{
		srand(time(0));
		this->_type = "rotting";
		this->_horde_size = horde_size;
		this->_horde = new Zombie*[this->_horde_size];
		for (int i = 0;  i < _horde_size; ++i)
			this->_horde[i] = create_single_zombie();
	}

	Zombie* create_single_zombie();

	~ZombieHorde()
	{
		for (int i = 0; i < _horde_size; ++i)
			this->_horde[i]->announce();
		for (int i = 0; i < _horde_size; ++i)
			delete this->_horde[i];
		delete[] _horde;
	}
};

#endif