class Fixed
{
private:
	int					_fixed_pvalue;
	static const int	_number_fbits = 8;
public:
	Fixed(int fixed_pvalue = 0) : _fixed_pvalue(fixed_pvalue)
	{
		std::cout << "Default constructor called" << std::endl;
	}

	Fixed(const Fixed &fixed)
	{
		std::cout << "Copy constructor called" << std::endl;
		this->_fixed_pvalue = fixed.getRawBits();
	}

	Fixed&	operator=(const Fixed &fixed)
	{
		std::cout << "Assignation operator called" << std::endl;
		if (this == &fixed)
			return (*this);
		this->_fixed_pvalue = fixed.getRawBits();
		return (*this);
	}

	int		getRawBits(void) const
	{
		std::cout << "getRawBits member function called" << std::endl;
		return (this->_fixed_pvalue);
	}

	void	setRawBits(int const raw)
	{
		this->_fixed_pvalue = raw;
	}

	~Fixed()
	{
		std::cout << "Destructor called" << std::endl;
	}
};