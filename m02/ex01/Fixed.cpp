#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->num = 0;
}

Fixed::Fixed(const int val)
{
	std::cout << "Int constructor called" << std::endl;
	this->num = (val << Fixed::bit);
}

Fixed::Fixed(const float val)
{
	std::cout << "Float constructor called" << std::endl;
	this->num = roundf(val * (1 << Fixed::bit));
}

Fixed::Fixed(Fixed const &other)
{
	std::cout << "Copy constructor called" << std::endl;
	this->num = other.getRawBits();
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(Fixed const &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->num = other.getRawBits();
	return (*this);
}

std::ostream &operator<<(std::ostream &out, Fixed const &value)
{
	out << value.toFloat();
	return (out);
}

int Fixed::getRawBits(void) const
{
	return (this->num);

}

void Fixed::setRawBits(int const raw)
{
	this->num = raw;
}

float Fixed::toFloat(void) const
{
	return ((float)this->num / (float)(1 << Fixed::bit));
}

int Fixed::toInt(void) const
{
	return (this->num >> Fixed::bit);
}

