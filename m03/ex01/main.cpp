#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap	john("John");
	ScavTrap	george("George");

	std::cout << "---" << std::endl;

	george.attack("John");
	john.takeDamage(10);
	std::cout << "---" << std::endl;

	john.attack("George");
	george.takeDamage(5);
	std::cout << "---" << std::endl;

	george.beRepaired(5);
	george.beRepaired(10);
	std::cout << "---" << std::endl;
	george.guardGate();
	std::cout << "---" << std::endl;
}
