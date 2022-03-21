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

bool Fixed::operator>(Fixed const &other) const
{
	return (this->getRawBits() > other.getRawBits());
}

bool Fixed::operator<(Fixed const &other) const
{
	return (this->getRawBits() < other.getRawBits());
}

bool Fixed::operator>=(Fixed const &other) const
{
	return (this->getRawBits() >= other.getRawBits());
}

bool Fixed::operator<=(Fixed const &other) const
{
	return (this->getRawBits() <= other.getRawBits());
}

bool Fixed::operator==(Fixed const &other) const
{
	return (this->getRawBits() == other.getRawBits());
}

bool Fixed::operator!=(Fixed const &other) const
{
	return (this->getRawBits() != other.getRawBits());
}

Fixed Fixed::operator+(Fixed const &other)
{
	return (this->getRawBits() + other.getRawBits());
}

Fixed Fixed::operator-(Fixed const &other)
{
	return (this->getRawBits() - other.getRawBits());
}

Fixed Fixed::operator*(Fixed const &other)
{
	Fixed num(*this);
	long temp1;
	long temp2;

	temp1 = ((long)this->getRawBits());
	temp2 = ((long)other.getRawBits());
	num.setRawBits((temp1 * temp2 / (1 << Fixed::bit)));
	return (num);
}

Fixed Fixed::operator/(Fixed const &other)
{
	Fixed num(*this);
	long temp1;
	long temp2;

	temp1 = ((long)this->getRawBits());
	temp2 = ((long)other.getRawBits());
	num.setRawBits((temp1 * (1 << Fixed::bit)) / temp2);
	return (num);
}

Fixed Fixed::operator++(int)
{
	Fixed temp(*this);
	operator++();
	return (temp);
}

Fixed Fixed::operator--(int)
{
	Fixed temp(*this);
	operator--();
	return (temp);
}

Fixed Fixed::operator++()
{
	this->num++;
	return (*this);
}

Fixed Fixed::operator--()
{
	this->num--;
	return (*this);
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a > b)
		return (b);
	return (a);
}

Fixed const &min(Fixed const &a, Fixed const &b)
{
	return (Fixed::min(a, b));
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a > b)
		return (b);
	return (a);
}

Fixed &min(Fixed &a, Fixed &b)
{
	return (Fixed::min(a, b));
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a < b)
		return (b);
	return (a);
}

Fixed const &max(Fixed const &a, Fixed const &b)
{
	return (Fixed::max(a, b));
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a < b)
		return (b);
	return (a);
}

Fixed &max(Fixed &a, Fixed &b)
{
	return (Fixed::max(a, b));
}

