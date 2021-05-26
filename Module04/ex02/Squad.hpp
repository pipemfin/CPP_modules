#ifndef SQUAD_HPP
#define SQUAD_HPP

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"
#include <iostream>

class Squad : ISquad
{
	private:
		int				_count;
		ISpaceMarine	*_squad_begin;
	public:
		Squad();
		Squad(const Squad &squad);
		Squad &operator=(const Squad &squad);
		int getCount();
		ISpaceMarine *getUnit(int n);
		virtual ~Squad();
};

#endif