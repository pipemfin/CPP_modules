#include "Zombie.hpp"

void Zombie::announce(void)
{
	std::cout << "<" << this->type << " " << this->name << ">" << " Braiiiiiiinnnssss..." << std::endl;
}