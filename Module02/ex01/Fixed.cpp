#include "Fixed.hpp"

Fixed::Fixed()
{
	this->_fixed_pvalue = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int fixed_pvalue) : _fixed_pvalue(fixed_pvalue * (1 << _number_fbits))
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float fixed_pvalue) : _fixed_pvalue(roundf(fixed_pvalue * (1 << _number_fbits)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_fixed_pvalue = fixed.getRawBits();
}

Fixed&	Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this == &fixed)
		return (*this);
	this->_fixed_pvalue=fixed.getRawBits();
	return (*this);
}

int	Fixed::toInt()	const
{
	return (this->_fixed_pvalue >> _number_fbits);
}

float	Fixed::toFloat()	const
{
	return (this->_fixed_pvalue / (1.0 * (1 << _number_fbits)));
}

int Fixed::getRawBits(void) const
{
	return (_fixed_pvalue);
}

void Fixed::setRawBits(int const raw)
{
	this->_fixed_pvalue = raw;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

std::ostream&	operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}