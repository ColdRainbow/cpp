#include "Array.hpp"

int main()
{
	Array <char> charArray(21);

	try
	{
		charArray[42];
 	}
	catch (Array<char>::InvalideNumExeption &ex)
	{
		std::cout << ex.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		charArray[5];
 	}
	catch (Array<char>::InvalideNumExeption &ex)
	{
		std::cout << ex.what() << std::endl;
	}

	Array <int> intArray(42);

	for (int i = 0; (unsigned int)i < intArray.size(); i++)
	{
		try
		{
			intArray[i] = i;
			std::cout << intArray[i] << std::endl;
		}
		catch (Array<int>::InvalideNumExeption &ex)
		{
			std::cout << ex.what() << std::endl;
		}
	}

	std::cout << std::endl;
	Array <double> doubleArray(42);

	for (int i = 0; (unsigned int)i < intArray.size(); i++)
	{
		try
		{
			doubleArray[i + 1] = i;
			std::cout << doubleArray[i + 1] << std::endl;
		}
		catch (Array<double>::InvalideNumExeption &ex)
		{
			std::cout << ex.what() << std::endl;
		}
	}
	return (0);
}
