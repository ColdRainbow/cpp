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

		bool operator>(Fixed const &other) const;
		bool operator<(Fixed const &other) const;
		bool operator>=(Fixed const &other) const;
		bool operator<=(Fixed const &other) const;
		bool operator==(Fixed const &other) const;
		bool operator!=(Fixed const &other) const;

		Fixed operator+(Fixed const &other);
		Fixed operator-(Fixed const &other);
		Fixed operator*(Fixed const &other);
		Fixed operator/(Fixed const &other);

		Fixed operator++(int);
		Fixed operator++();
		Fixed operator--(int);
		Fixed operator--();

		static Fixed const &min(Fixed const &a, Fixed const &b);
		static Fixed &min(Fixed &a, Fixed &b);
		static Fixed const &max(Fixed const &a, Fixed const &b);
		static Fixed &max(Fixed &a, Fixed &b);
};

std::ostream &operator<<(std::ostream &out, Fixed const &value);
