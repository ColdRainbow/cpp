#include "Zombie.hpp"

int main()
{
	Zombie* horde;
	std::string name("pepa");
	horde = zombieHorde(3, name);
	horde[0].announce();
	horde[1].announce();
	horde[2].announce();
	delete[] horde;
	return (0);
}

