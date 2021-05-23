#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
public:
	int					_fixed_pvalue;
	static const int	_number_fbits = 8;
public:
	Fixed();

	Fixed(const int fixed_pvalue);
	Fixed(const float fixed_pvalue);
	Fixed(const Fixed &fixed);
	Fixed&	operator=(const Fixed &fixed);
	int	toInt()	const;
	float	toFloat()	const;
	int getRawBits(void) const;
	void setRawBits(int const raw);

	~Fixed();
};

std::ostream&	operator<<(std::ostream &out, const Fixed &fixed);


#endif