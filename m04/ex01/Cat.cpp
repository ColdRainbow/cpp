#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Default constructor for cat called." << std::endl;
	this->brain = new Brain;
}

Cat::Cat(Cat const &other)
{
	*this = other;
}

Cat &Cat::operator=(Cat const &other)
{
	delete this->brain;
	this->type = other.type;
	this->brain = new Brain;
	*this->brain = *other.brain;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Destructor for cat called." << std::endl;
	delete this->brain;
}

void Cat::makeSound() const
{
	std::cout << "Meow." << std::endl;
}

Brain Cat::getBrain()
{
	return (*this->brain);
}

void Cat::setBrain(Brain brain)
{
	*this->brain = brain;
}
