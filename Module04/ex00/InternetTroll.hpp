#ifndef INTERNETTROLL_HPP
#define INTERNETTROLL_HPP

#include "Victim.hpp"

class InternetTroll : public Victim
{
private:
	InternetTroll();
public:
	InternetTroll(std::string name);
	InternetTroll(const InternetTroll &troll);
	InternetTroll &operator=(const InternetTroll &troll);
	virtual void getPolymorphed() const;
	
	virtual ~InternetTroll();
};

#endif