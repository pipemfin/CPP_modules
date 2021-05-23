#ifndef BRAIN_HPP
#define BRAIN_HPP

class Brain
{
private:
	double	_weight;
	double	_gray_matter_density;
	int		_iq_coefficient;

public:
	Brain();

	const Brain *identify(void) const;
};

#endif