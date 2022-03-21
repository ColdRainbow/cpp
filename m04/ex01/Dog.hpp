#pragma once
#include "Animal.hpp"
#include <iostream>

class Dog: virtual public Animal
{
	private:
		Brain *brain;
		
	public:
		Dog();
		Dog(Dog const &other);
		virtual Dog &operator=(Dog const &other);
		virtual ~Dog();

		virtual void makeSound() const;

		virtual Brain getBrain();
		virtual void setBrain(Brain brain);
};

