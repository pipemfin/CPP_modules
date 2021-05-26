#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 50, 8){}

PowerFist::PowerFist(const PowerFist &powerfist) : AWeapon(powerfist.getName(), powerfist.getDamage(), powerfist.getAPCost())
{

}

PowerFist &PowerFist::operator=(const PowerFist &powerfist)
{
	if (this == &powerfist)
		return (*this);
	AWeapon::operator=(powerfist);
	return (*this);
}

void PowerFist::attack () const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}

PowerFist::~PowerFist()
{
	
}