#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>
#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
	private:
		std::string		_name;
		unsigned int	_ap;
		AWeapon			*_weapon;
		Character();
		Character(Character const &character);
	public:
		Character(std::string const & name);
		Character &operator=(Character const &name);
		~Character();
		void recoverAP();
		void equip(AWeapon*);
		void attack(Enemy*);
		std::string const getName() const;
		int getAP() const;
		AWeapon* getWeapon() const;
};

std::ostream& operator<<(std::ostream &out,const Character &name);

#endif