#ifndef SQUAD_HPP
#define SQUAD_HPP

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"
#include <iostream>

class Squad : public ISquad
{
	private:
		int				_count;
		ISpaceMarine	**_squad_begin;
	public:
		Squad();
		Squad(const Squad &squad);
		Squad &operator=(const Squad &squad);
		virtual int getCount() const;
		virtual ISpaceMarine* getUnit(int n) const;
		virtual int push(ISpaceMarine *marine);
		virtual ~Squad();
};

#endif


