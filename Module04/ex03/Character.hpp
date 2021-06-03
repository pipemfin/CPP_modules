#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <string>
#include <iostream>

class Character : public ICharacter
{
	private:
		AMateria	*_inventory[4];
		int			_count;
		std::string	_name;
		Character();
	public:
		Character(std::string const &name);
		Character(const Character &character);
		Character &operator=(const Character &character);
		virtual ~Character();
		virtual std::string const & getName() const;
		int const &getCount() const;
		virtual void equip(AMateria *materia);
		virtual void unequip(int idx);
		AMateria *returnMateria(unsigned int idx) const;
		virtual void use(int idx, ICharacter& target);
};

#endif