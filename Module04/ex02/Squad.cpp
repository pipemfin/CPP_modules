#include "Squad.hpp"

Squad::Squad()
{
	this->_count = 0;
	this->_squad_begin = NULL;
}

// Squad::Squad(const Squad &squad)
// {

// }

// Squad &Squad::operator=(const Squad &squad)
// {

// }

int Squad::getCount()	{return this->_count;}

ISpaceMarine *Squad::getUnit(int n)
{
	ISpaceMarine *iter = this->_squad_begin;
	for (int i = 1; i < n; iter = iter->next)
	{
		if (n == i)
			return (iter);
	}
}

Squad::~Squad()
{

}