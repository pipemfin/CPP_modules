class Brain
{
private:
	double	_weight;
	double	_gray_matter_density;
	int		_iq_coefficient;

public:
	Brain()
	{
		this->_weight = 1500;
		this->_gray_matter_density = 1.0;
		this->_iq_coefficient = 100;
	}

	Brain *identify(void)
	{
		return (this);
	}

	const Brain *identify(void) const
	{
		return (this);
	}
};