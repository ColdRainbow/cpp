#include "Zombie.hpp"

void Zombie::announce(void)
{
	std::cout << _name;
	std::cout << ": BraiiiiiiinnnzzzZ..." << std::endl;
} 

void Zombie::setName(std::string& name)
{
	_name = name;
}

Zombie::Zombie() {};

Zombie::Zombie(std::string& name)
{
	_name = name;
}

Zombie::~Zombie()
{
	std::cout << _name;
	std::cout << std::endl;
}
