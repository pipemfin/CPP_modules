#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <string>
#include <iostream>

class Victim
{
protected:
	std::string	_name;
	Victim();
public:
	Victim(std::string name);
	Victim(const Victim &victim);
	Victim &operator=(const Victim &victim);

	std::string getName() const;
	virtual void getPolymorphed() const;

	~Victim();
};

std::ostream& operator<<(std::ostream &out, const Victim &victim);

#endif