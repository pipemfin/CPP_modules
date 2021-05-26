#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant : public Enemy
{
	private:
	public:
		SuperMutant();
		SuperMutant(const SuperMutant &supermutant);
		SuperMutant &operator=(const SuperMutant &supermutant);
		virtual void takeDamage(int);
		~SuperMutant();
};

#endif