#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
	Zombie* person = new Zombie(name);
	return (person);
}

