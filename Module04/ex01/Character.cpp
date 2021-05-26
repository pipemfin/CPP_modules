#include "Character.hpp"

Character::Character(std::string const &name)
{
	this->_name = name;
	this->_ap = 40;
	this->_weapon = NULL;
}

Character &Character::operator=(Character const &name)
{
	if (this == &name)
		return (*this);
	this->_ap = name.getAP();
	this->_name = name.getName();
	this->_weapon = name.getWeapon();
	return (*this);
}

void Character::recoverAP()
{
	this->_ap += 10;
	if (this->_ap > 40)
		this->_ap = 40;
}

void Character::equip(AWeapon *weapon)
{
	this->_weapon = weapon;
}

void Character::attack(Enemy *enemy)
{
	if ((int)this->_ap < this->_weapon->getAPCost())
		return ;
	std::cout << this->_name << " attacks " << enemy->getType() << " with a " << this->_weapon->getName() << std::endl;
	this->_weapon->attack();
	this->_ap -= this->_weapon->getAPCost();
	enemy->takeDamage(this->_weapon->getDamage());
}

std::string const Character::getName() const
{
	return (this->_name);
}

int Character::getAP() const
{
	return (this->_ap);
}

AWeapon* Character::getWeapon() const
{
	return (this->_weapon);
}


Character::~Character()
{

}

std::ostream& operator<<(std::ostream &out,const Character &character)
{
	out << character.getName();
	out << " has ";
	out << character.getAP();
	out << " AP and";
	if (character.getWeapon() == NULL)
		out << " is unarmed";
	else
	{
		out << " wields a ";
		out << character.getWeapon()->getName();
	}
	out << std::endl;
	return (out);
}