#include "AlienBlaster.hpp"

AlienBlaster::AlienBlaster() : AWeapon("Alien Blaster", 100, 1) {}

AlienBlaster& AlienBlaster::operator=(const AlienBlaster &alienblaster)
{
	if (this == &alienblaster)
		return (*this);
	AWeapon::operator=(alienblaster);
	return (*this);
}

void AlienBlaster::attack() const
{
	std::cout << "* wshooox-wshooox ... BADUMSSS *" << std::endl;
}

AlienBlaster::~AlienBlaster()	{	}