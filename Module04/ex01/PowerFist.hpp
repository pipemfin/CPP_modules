#ifndef POWERFIST_HPP
#define POWERFIST_HPP

#include <string>
#include <iostream>
#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
	private:
	public:
		PowerFist();
		PowerFist(const PowerFist &powerfist);
		PowerFist& operator=(const PowerFist &powerfist);

		virtual void attack() const;
		virtual ~PowerFist();
};

#endif