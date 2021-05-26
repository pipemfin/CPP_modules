#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP

#include <string>
#include <iostream>
#include "Enemy.hpp"

class RadScorpion : public Enemy
{
	public:
		RadScorpion(const RadScorpion &RadScorpion);
		RadScorpion();
		RadScorpion &operator=(const RadScorpion & RadScorpion);
		void takeDamage(int damage);
		virtual ~RadScorpion();
};

#endif