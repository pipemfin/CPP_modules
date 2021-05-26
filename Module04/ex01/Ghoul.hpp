#ifndef GHOUL_HPP
#define GHOUL_HPP

#include "Enemy.hpp"

class Ghoul : public Enemy
{
	private:
	public:
		Ghoul();
		Ghoul(const Ghoul &supermutant);
		Ghoul &operator=(const Ghoul &ghoul);
		virtual void takeDamage(int);
		~Ghoul();
};

#endif