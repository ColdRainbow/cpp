#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"

DiamondTrap::DiamondTrap(std::string const &name)
{
	setName(name);
        ClapTrap::name = name + "_clap_name";
	std::cout << getName() << " DiamondTrap constructor called." << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called." << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << "Its name is " << getName();
	std::cout << ". Its ClapTrap name is " << ClapTrap::getName() << "." << std::endl;
}

std::string DiamondTrap::getName(void)
{
	return (this->name);
}

void DiamondTrap::setName(std::string const &name)
{
	this->name = name;
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}
