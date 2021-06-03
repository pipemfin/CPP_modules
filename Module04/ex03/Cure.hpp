#ifndef CURE_HPP
#define CURE_HPP

#include <string>
#include <iostream>
#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure(const Cure &cure);
		Cure &operator=(const Cure &Cure);
		virtual ~Cure();
		virtual AMateria* clone() const;
		void use(ICharacter& target);
};

#endif