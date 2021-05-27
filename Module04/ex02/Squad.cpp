#include "Squad.hpp"

Squad::Squad()
{
	this->_count = 0;
	this->_squad_begin = NULL;
}

Squad::Squad(const Squad &squad)
{
	this->_squad_begin = new ISpaceMarine *[squad.getCount()];
	this->_count = squad.getCount();
	for (int i = 0; i < this->_count; i++)
		this->_squad_begin[i] = squad.getUnit(i)->clone();
}

Squad &Squad::operator=(const Squad &squad)
{
	if (this == &squad)
		return (*this);
	if (this->_squad_begin)
	{
		for (int i = 0; i < this->_count; i++)
			delete this->_squad_begin[i];
		delete[] this->_squad_begin;
	}
	this->_squad_begin = new ISpaceMarine *[squad.getCount()];
	this->_count = squad.getCount();
	for (int i = 0; i < this->_count; i++)
		this->_squad_begin[i] = squad.getUnit(i)->clone();
	return (*this);
}

int Squad::getCount() const
{
	return (this->_count);
}

ISpaceMarine* Squad::getUnit(int n) const
{
	if (n > this->getCount() || this->getCount() == 0)
		return (nullptr);
	return (this->_squad_begin[n]);
}

int Squad::push(ISpaceMarine *marine)
{
	ISpaceMarine **copy_squad;

	if (this->_squad_begin == NULL)
	{
		this->_squad_begin = new ISpaceMarine *[1];
		this->_squad_begin[0] = marine;
	}
	else
	{
		copy_squad = new ISpaceMarine*[this->getCount() + 1];
		for (int i = 0; i < this->_count; i++)
			copy_squad[i] = this->_squad_begin[i];
		delete _squad_begin;
		copy_squad[this->_count] = marine;
		this->_squad_begin = copy_squad;
	}
	return (++this->_count);
}

Squad::~Squad()
{
	if (this->_squad_begin)
	{
		for (int i = 0; i < this->_count; i++)
			delete this->_squad_begin[i];
		delete[] this->_squad_begin;
	}
}