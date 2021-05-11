#ifndef PONY_HPP
#define PONY_HPP

#include <iostream>

class Pony
{
private:
	double	weight;
	double	height;
	int		leg_count;
	int		tail;
	int		bag_with_drugs;

public:
	Pony()
	{
		leg_count = 4;
		tail = 1;
		bag_with_drugs = 1;
	}

	void make_some_noize(void);
};

#endif