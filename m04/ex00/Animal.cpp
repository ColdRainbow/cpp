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

//-----------------------------------------------------------------

WrongAnimal::WrongAnimal() 
{
	this->type = "Animal";
	std::cout << "Default constructor for wrong animal called." << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &other)
{
	*this = other;
	std::cout << "Copy constructor for wrong animal called." << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &other)
{
	this->type = other.type;
	std::cout << "Copy assignment operator for  wrong animal called." << std::endl;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor for wrong animal called." << std::endl;
}

void WrongAnimal::setType(std::string type)
{
	this->type = type;
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}

void WrongAnimal::makeSound() const
{
	std::cout << "Fuck war." << std::endl;
}
