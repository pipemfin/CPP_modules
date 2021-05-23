#include "Zombie.hpp"

Zombie::Zombie()
{
	this->type = "default";
	this->name = "default";
}

Zombie::Zombie(std::string type, std::string name)
{
	this->type = type;
	this->name = name;
}

void Zombie::set_name_type(std::string name, std::string type)
{
	this->type = type;
	this->name = name;
}

void Zombie::announce(void)
{
	std::cout << "<" << this->type << " " << this->name << ">" << " Braiiiiiiinnnssss..." << std::endl;
}