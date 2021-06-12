#ifndef PION_HPP
#define PION_HPP

#include "Victim.hpp"

class Peon : public Victim
{
private:
	Peon();
public:
	Peon(std::string name);
	Peon(const Peon &pion);
	Peon &operator=(const Peon &peon);
	virtual void getPolymorphed() const;
	
	virtual ~Peon();
};

#endif