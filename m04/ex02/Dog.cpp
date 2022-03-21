#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	this->brain = new Brain;
	std::cout << "Default constructor for dog called." << std::endl;
}

Dog &Dog::operator=(Dog const &other)
{
    delete this->brain;
    this->type = other.type;
    this->brain = new Brain;
    *this->brain = *other.brain;
    return *this;
}

Dog::Dog(Dog const &other)
{
	*this = other;
}

Dog::~Dog()
{
	std::cout << "Destructor for dog called." << std::endl;
	delete this->brain;
}

void Dog::makeSound() const
{
	std::cout << "Bark." << std::endl;
}

Brain Dog::getBrain()
{
    return *this->brain;
}

void Dog::setBrain(Brain brain)
{
    *this->brain = brain;
}

