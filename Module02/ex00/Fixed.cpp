#include "Fixed.hpp"

Fixed::Fixed(int fixed_value)
{
	this->_fixed_pvalue = fixed_value;
	std::cout << "Default constructor called" << std::endl;
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
	this->_fixed_pvalue = fixed.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixed_pvalue);
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixed_pvalue = raw;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}