#pragma once
#include "Animal.hpp"
#include <iostream>

class Dog: public Animal
{
	public:
		Dog();
		virtual ~Dog();

		virtual void makeSound() const;
};

class WrongDog: public WrongAnimal
{
	public:
		WrongDog();
		~WrongDog();

		void makeSound() const;
};
