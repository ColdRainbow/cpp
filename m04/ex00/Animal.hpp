#pragma once
#include <iostream>

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

		virtual void makeSound() const;
};

class WrongAnimal
{
	protected:
		std::string type;
	
	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal const &other);
		WrongAnimal &operator=(WrongAnimal const &other);
		~WrongAnimal();

		void setType(std::string type);
		std::string getType() const;

		void makeSound() const;
};
