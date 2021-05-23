#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int horde_size)
{
	srand(time(0));
	this->_type = "rotting";
	this->_horde_size = horde_size;
	this->_horde = new Zombie[this->_horde_size];
	for (int i = 0;  i < _horde_size; ++i)
		this->_horde[i].set_name_type(this->give_name_zombie(), this->_type);
	for (int i = 0; i < _horde_size; ++i)
		this->_horde[i].announce();
}


std::string ZombieHorde::give_name_zombie()
{
	std::string _names[10] = {"Someone", "Adolph Hitler",
		"Stephen Hawking", "Flarit Faritovich", "Larry King", 
			"Pushkin Alexander", "Peter the Great", "ThatGuy",
				"Dmitri Ivanovich Mendeleev", "Maksim Marcenkevich"};
	return (_names[rand() % 10]);
}

ZombieHorde::~ZombieHorde()
{
	delete[] _horde;
}