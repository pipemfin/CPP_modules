#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

#include <string>
#include <iostream>
#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
	public:
		PlasmaRifle();
		PlasmaRifle(const PlasmaRifle &plasmarifle);
		PlasmaRifle& operator=(const PlasmaRifle &plasmarifle);

		virtual void attack() const;
		virtual ~PlasmaRifle();
};

#endif