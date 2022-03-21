#pragma once
#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int num;
		static const int bit = 8;

	public:
		Fixed();
		Fixed(Fixed const &other);
		Fixed &operator=(Fixed const &other);

		Fixed(const int val);
		Fixed(const float val);
		virtual ~Fixed();

		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt (void) const;
};

std::ostream &operator<<(std::ostream &out, Fixed const &value);
