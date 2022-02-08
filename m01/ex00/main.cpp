#include "Zombie.hpp"

int main()
{
	std::string name("pepa");
	Zombie z(name);
	z.announce();
	Zombie *zombieee = newZombie("Aeclipsa");
	zombieee->announce();
	randomChump("jkek");
	delete zombieee;
	return (0);
}
