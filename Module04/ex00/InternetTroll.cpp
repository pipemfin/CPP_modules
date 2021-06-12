#include "InternetTroll.hpp"

InternetTroll::InternetTroll(std::string name) : Victim(name)
{
	std::cout << "Ha-ha, where is the comments?" << std::endl;
}

InternetTroll::InternetTroll(const InternetTroll &troll)
{
	this->_name = troll.getName();
}

InternetTroll &InternetTroll::operator=(const InternetTroll &troll)
{
	if (this == &troll)
		return (*this);
	this->_name = troll.getName();
	return (*this);
}

void InternetTroll::getPolymorphed() const
{
	std::cout << this->getName() << " has been turned into a fat pig!" << std::endl;
}

InternetTroll::~InternetTroll()
{
	std::cout << "Nooooo..." << std::endl;
}