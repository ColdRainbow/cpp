#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Default constructor for dog called." << std::endl;
}

Dog::~Dog()
{
	std::cout << "Destructor for dog called." << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Bark." << std::endl;
}

//-----------------------------------------------------------------

WrongDog::WrongDog()
{
	this->type = "Dog";
	std::cout << "Default constructor for wrong dog called." << std::endl;
}

WrongDog::~WrongDog()
{
	std::cout << "Destructor for wrong dog called." << std::endl;
}

void WrongDog::makeSound() const
{
	std::cout << "Bark." << std::endl;
}
