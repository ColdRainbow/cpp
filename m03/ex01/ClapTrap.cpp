#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->name = "NoName";
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
	std::cout << "Default constructor called for " << this->name << "." << std::endl;
}

ClapTrap::ClapTrap(std::string const &name) : name(name)
{
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
	std::cout << "Constructor with name called for " << this->name << "." << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &other)
{
	*this = other;
	std::cout << "Copy constructor called." << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &other)
{
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
	return (*this);
	std::cout << "Copy assignment operator called." << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called for " << this->name << "." << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->hitPoints < 1 || this->energyPoints < 1)
	{
		std::cout << "Not enough energy or health." << std::endl;
		return ;
	}
	this->energyPoints--;
	std::cout << this->name << " attacks " << target << "." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hitPoints < 1 || this->energyPoints < 1)
	{
		std::cout << "Not enough energy or health." << std::endl;
		return ;
	}
	this->hitPoints += amount;
	this->hitPoints--;
	this->energyPoints--;
	std::cout << this->name << " repaired " << amount << " points." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoints > 0)
	{
		std::cout << "Took " << amount << " points of damage." << std::endl;
		if (this->hitPoints -= amount > 0)
			this->hitPoints -= amount;
		return ;
	}
	std::cout << "Died before u." << std::endl;
}

void ClapTrap::setName(std::string const &name)
{
	this->name = name;
}

std::string ClapTrap::getName(void)
{
	return (this->name);
}
