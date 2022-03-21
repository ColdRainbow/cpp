#include "Animal.hpp"

Animal::Animal()
{
	this->type = "Animal";
	std::cout << "Default constructor for animal called." << std::endl;
}

Animal::Animal(Animal const &other)
{
	*this = other;
	std::cout << "Copy constructor for animal called." << std::endl;
}

Animal &Animal::operator=(Animal const &other)
{
	this->type = other.type;
	std::cout << "Copy assignment operator for animal called." << std::endl;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Destructor for animal called." << std::endl;
}

void Animal::setType(std::string type)
{
	this->type = type;
}

std::string Animal::getType() const
{
	return (this->type);
}

void Animal::makeSound() const
{
	std::cout << "Fuck war." << std::endl;
}

