#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

#include <string>
#include <iostream>
#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
	private:
		PlasmaRifle(const PlasmaRifle &plasmarifle);
	public:
		PlasmaRifle();
		PlasmaRifle& operator=(const PlasmaRifle &plasmarifle);

		virtual void attack() const;
		~PlasmaRifle();
};

#endif