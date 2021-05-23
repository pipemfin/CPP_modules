#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
	std::string type;
	std::string name;

public:
	Zombie();
	Zombie(std::string type, std::string name);

	void set_name_type(std::string name, std::string type);

	void announce(void);
};

#endif