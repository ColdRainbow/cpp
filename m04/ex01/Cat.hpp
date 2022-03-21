#pragma once
#include "Animal.hpp"
#include <iostream>

class Cat: virtual public Animal
{
	private:
		Brain *brain;

	public:
		Cat();
		Cat(Cat const &other);
		virtual Cat &operator=(Cat const &other);
		virtual ~Cat();

		virtual void makeSound() const;

		virtual Brain getBrain();
		virtual void setBrain(Brain brain);
};

