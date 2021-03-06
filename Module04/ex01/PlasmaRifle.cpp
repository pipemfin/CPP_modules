#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 21, 5) {}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &plasmarifle) : AWeapon(plasmarifle.getName(), plasmarifle.getDamage(), plasmarifle.getAPCost())
{}

PlasmaRifle& PlasmaRifle::operator=(const PlasmaRifle &plasmarifle)
{
	if (this == &plasmarifle)
		return (*this);
	AWeapon::operator=(plasmarifle);
	return (*this);
}

void PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

PlasmaRifle::~PlasmaRifle()	{}