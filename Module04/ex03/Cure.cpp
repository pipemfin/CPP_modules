#include "Cure.hpp"

Cure::Cure()	: AMateria("cure") {}

Cure::Cure(const Cure &cure) : AMateria(cure.getType()) {}

Cure &Cure::operator=(const Cure &Cure)
{
	if (this == &Cure)
		return (*this);
	AMateria::operator=(Cure);
	return (*this);
}

void Cure::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* heals " <<  target.getName() << "’s wounds *" << std::endl;
}

AMateria* Cure::clone() const
{
	return (new Cure);
}

Cure::~Cure() {}