#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &supermutant) : Enemy(supermutant.getHP(), supermutant.getType())
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant &SuperMutant::operator=(const SuperMutant &supermutant)
{
	if (this == &supermutant)
		return (*this);
	Enemy::operator=(supermutant);
	return (*this);
}

void SuperMutant::takeDamage(int damage)
{
	Enemy::takeDamage(damage - 3);
	if (this->getHP() == 0)
		SuperMutant::~SuperMutant();
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
}