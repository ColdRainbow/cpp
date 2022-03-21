#pragma once
#include <iostream>
#include "Brain.hpp"

class Animal
{
	protected:
		std::string type;
	
	public:
		Animal();
		Animal(Animal const &other);
		Animal &operator=(Animal const &other);
		virtual ~Animal();

		void setType(std::string type);
		std::string getType() const;

		virtual void makeSound() const = 0;
};

