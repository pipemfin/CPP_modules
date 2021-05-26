#ifndef ALIENBLASTER_HPP
#define ALIENBLASTER_HPP

#include <string>
#include <iostream>
#include "AWeapon.hpp"

class AlienBlaster : public AWeapon
{
	private:
		AlienBlaster(const AlienBlaster &alienblaster);
	public:
		AlienBlaster();
		AlienBlaster& operator=(const AlienBlaster &alienblaster);

		virtual void attack() const;
		~AlienBlaster();
};

#endif