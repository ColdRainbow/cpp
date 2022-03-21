#include "Point.hpp"
#include "Fixed.hpp"
#include <iostream>

Point::Point() : x(Fixed(0)), y(Fixed(0)) 
{}

Point::Point(float const a, float const b) : x(Fixed(a)), y(Fixed(b))
{}

Point::Point(Point const &other) : x(other.x), y(other.y)
{}

Point::~Point() {}

Point &Point::operator=(Point const &other)
{
        std::cout << "assignment operator can do nothing because x and y are const!" << std::endl;
	return (*this);
}

Point Point::operator-(Point const &rhs) const {
        float new_x = this->x.toFloat() - rhs.x.toFloat();
        float new_y = this->y.toFloat() - rhs.y.toFloat();
        return Point(new_x, new_y);
}

Point Point::normal() const
{
        return Point( -y.toFloat(), x.toFloat());
}

float Point::dot(Point const &other) const
{
        return x.toFloat()*other.x.toFloat() + y.toFloat()*other.y.toFloat() ;
}
