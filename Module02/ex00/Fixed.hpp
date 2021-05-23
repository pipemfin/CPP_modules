#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream>

class Fixed
{
private:
	int					_fixed_pvalue;
	static const int	_number_fbits = 8;
public:
	Fixed(int fixed_value = 0);
	Fixed(const Fixed &fixed);
	Fixed&	operator=(const Fixed &fixed);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	~Fixed();
};

#endif