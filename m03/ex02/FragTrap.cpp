#include "FragTrap.hpp"

FragTrap::FragTrap(std::string const &name)
{
	ClapTrap::setName(name);
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "FragTrap created." << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap was destroyed." << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "A positive high fives request." << std::endl;
}
