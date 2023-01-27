#include "Fixed.class.hpp"

int Fixed::getFixed(void) const
{
	return (this->number);
}

Fixed &	Fixed::operator=(const Fixed &assign)
{
	if (this != &assign)
	{
		this->number = assign.getFixed();
	}
	return (*this);
}

Fixed::Fixed(Fixed const &src)
{
	*this = src;
	return ;
}

Fixed::Fixed(void)
{
	return ;
}

Fixed::~Fixed(void)
{
	return ;
}
