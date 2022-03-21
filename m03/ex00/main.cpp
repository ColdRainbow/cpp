#include "ClapTrap.hpp"

int main()
{
	ClapTrap	john("John");
	ClapTrap	paul("Paul");

	std::cout << "---" << std::endl;

	paul.attack("John");
	john.takeDamage(5);
	std::cout << "---" << std::endl;

	john.attack("Paul");
	paul.takeDamage(2);
	std::cout << "---" << std::endl;

	john.beRepaired(5);
}
