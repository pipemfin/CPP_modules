#include "Brain.hpp"

class Human
{
private:
	const Brain brain;

public:
	const Brain &getBrain()
	{
		return (brain);
	}

	const Brain *identify()
	{
		return (this->brain.identify());
	}
};