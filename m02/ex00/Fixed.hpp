#pragma once
#include <iostream>

class Fixed
{
	private:
		int num;
		static const int bit = 8;
	public:
		Fixed();
		Fixed(Fixed const &other);
		Fixed &operator=(Fixed const &other);
		virtual ~Fixed();
		int getRawBits(void) const;
		void setRawBits(int const raw);
};
