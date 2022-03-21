#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Default constructor for cat called." << std::endl;
}

Cat::~Cat()
{
	std::cout << "Destructor for cat called." << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Meow." << std::endl;
}

//-----------------------------------------------------------

WrongCat::WrongCat()
{
	this->type = "Cat";
	std::cout << "Default constructor for cat called." << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor for wrong cat called." << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "Meow." << std::endl;
}
