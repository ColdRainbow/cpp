#pragma once
#include "Animal.hpp"
#include <iostream>

class Cat: public Animal
{
	public:
		Cat();
		virtual ~Cat();

		virtual void makeSound() const;
};

class WrongCat: public WrongAnimal
{
	public:
		WrongCat();
		~WrongCat();

		void makeSound() const;
};
