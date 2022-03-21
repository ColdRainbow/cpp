#include "Whatever.hpp"

int main( void )
{
	int a = 2;
	int b = 3;
	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
	std::cout << "max(a, b) = " << ::max(a, b) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min(c, d) = " << ::min(c, d) << std::endl;
	std::cout << "max(c, d) = " << ::max(c, d) << std::endl;

	std::cout << std::endl << "*---------- My tests ----------*" << std::endl << std::endl;

	{
		double a = 2.1;
		double b = 4.2;

		std::cout << "min value: " << ::min(a, b) << std::endl;
	}

	{
		char a = 42;
		char b = 42;

		std::cout << "max value: " << ::max(a, b) << std::endl;
	}

	{
		char a = 42;
		char b = 21;

		::swap(a, b);
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "max value: " << ::max(a, b) << std::endl;
	}

	{
		std::string hello = "hello";
		std::string bye = "bye";

		::swap(hello, bye);
		std::cout << "hello = " << hello << ", bye = " << bye << std::endl;
		std::cout << "max value: " << ::max(hello, bye) << std::endl;
	}

	return 0;
}
