#include "Ghoul.hpp"

Ghoul::Ghoul() : Enemy(100, "Ghoul")
{
	std::cout << "Ghoul: What have you lost here, a piece of shit?!" << std::endl;
}

Ghoul::Ghoul(const Ghoul &ghoul) : Enemy(ghoul.getHP(), ghoul.getType())
{
	std::cout << "Ghoul: What have you lost here, a piece of shit?!" << std::endl;
}

Ghoul &Ghoul::operator=(const Ghoul &ghoul)
{
	if (this == &ghoul)
		return (*this);
	Enemy::operator=(ghoul);
	return (*this);
}

void Ghoul::takeDamage(int damage)
{
	Enemy::takeDamage(damage);
	if (this->getHP() == 0)
		Ghoul::~Ghoul();
}

Ghoul::~Ghoul()
{
	std::cout << "Ghoul: I thought it couldn't get any worse...i'm dying" << std::endl;
}