#include "HumanB.hpp"

void HumanB::attack(void)
{
	std::cout << _name;
	std::cout << " attacks with their ";
	std::cout << _weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& weapon)
{
	_weapon = &weapon;
}

HumanB::HumanB(std::string name)
{
	_name = name;
}

HumanB::HumanB() {};

HumanB::~HumanB() {};
