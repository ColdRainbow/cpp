#include "HumanA.hpp"

void HumanA::attack(void)
{
	std::cout << _name;
	std::cout << " attacks with their ";
	std::cout << _weapon.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon& weapon) : _weapon(weapon)
{
	_name = name;
}

HumanA::~HumanA() {};
