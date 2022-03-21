#include <iostream>
//#include <cmatch>
#include "Fixed.hpp"

class Point
{
	private:
		Fixed const x;
		Fixed const y;
	
	public:
		Point();
		Point(float const a, float const b);
		Point(Point const &other);
		Point &operator=(Point const &other);
		Point operator-(Point const &rhs) const;
                Point normal() const;
                float dot(Point const &other) const;

		~Point();
};

bool is_on_the_right (Point const a, Point const b, Point const c);
bool bsp (Point const a, Point const b, Point const c, Point const point);
