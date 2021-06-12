#include "Character.hpp"

Character::Character(std::string const &name)
{
	for (int i = 0; i < 4; ++i)
		this->_inventory[i] = NULL;
	this->_count = 0;
	this->_name = name;
}

Character::Character(const Character &character)
{
	for (int i = 0; i < 4; ++i)
		if (character.returnMateria(i) != NULL)
			this->_inventory[i] = character.returnMateria(i)->clone();
		else
			this->_inventory[i] = NULL;
	this->_name = character.getName();
}

Character &Character::operator=(const Character &character)
{
	if (this == &character)
		return (*this);
	for (int i = 0; i < 4; ++i)
		delete this->_inventory[i];
	for (int i = 0; i < 4; ++i)
		if (character.returnMateria(i) != NULL)
			this->_inventory[i] = character.returnMateria(i)->clone();
		else
			this->_inventory[i] = NULL;
	this->_count = character.getCount();
	this->_name = character.getName();
	return (*this);
}

std::string const &Character::getName()		const { return (this->_name); }

int 		const &Character::getCount()	const { return (this->_count); }

void Character::equip(AMateria *materia)
{
	if (this->_count == 4)
		return ;
	for (int i = 0; i < 4; ++i)
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = materia;
			this->_count += 1;
			return ;
		}
}

void Character::unequip(int idx)
{
	if (this->_count <= idx)
		return ;
	else
		this->_inventory[idx] = NULL;
	this->_count -= 1;
}

AMateria *Character::returnMateria(unsigned int idx) const
{
	if (idx > 3)
		return NULL;
	return (this->_inventory[idx]);
}

void Character::use(int idx, ICharacter& target)
{
	if (this->_count <= idx)
		return ;
	this->_inventory[idx]->use(target);
}

Character::~Character() 
{
	for (int i = 0; i < 4; ++i)
		if (this->_inventory[i] != NULL)
			delete this->_inventory[i];
}