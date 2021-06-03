#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	private:
		std::string		_type;
		unsigned int	_xp;
		AMateria();
		AMateria(AMateria const &amateria);
	public:
		AMateria(std::string const &type);
		AMateria &operator=(AMateria const &amateria);
		virtual ~AMateria();
		std::string const & getType() const;
		unsigned int getXP() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif