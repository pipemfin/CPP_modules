#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
	std::string type;
	std::string name;

public:
	

	Zombie(std::string type, std::string name)
	{
		this->type = type;
		this->name = name;
	}

	void announce(void);
};

#endif