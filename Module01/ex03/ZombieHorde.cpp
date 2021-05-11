#include "ZombieHorde.hpp"

Zombie* ZombieHorde::create_single_zombie()
{
	std::string _names[10] = {"Someone", "Adolph Hitler",
		"Stephen Hawking", "Flarit Faritovich", "Larry King", 
			"Pushkin Alexander", "Peter the Great", "ThatGuy",
				"Dmitri Ivanovich Mendeleev", "Maksim Marcenkevich"};
	return (new Zombie(_type, _names[rand() % 10]));
}