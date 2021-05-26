#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion &radscorpion) : Enemy(radscorpion.getHP(), radscorpion.getType())
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion &RadScorpion::operator=(const RadScorpion & radscorpion)
{
	if (this == &radscorpion)
		return (*this);
	Enemy::operator=(radscorpion);
	return (*this);
}

void RadScorpion::takeDamage(int damage)
{
	Enemy::takeDamage(damage);
	if (this->getHP() == 0)
		RadScorpion::~RadScorpion();
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}