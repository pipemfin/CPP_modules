#ifndef PONY_HPP
#define PONY_HPP

#include <iostream>

class Pony
{
private:
	int		leg_count;
	int		tail;
	int		bag_with_drugs;

public:
	Pony();

	void make_some_noize(void);
};

#endif