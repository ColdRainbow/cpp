#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap	john("John");
	FragTrap	george("George");

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
	george.highFivesGuys();
	std::cout << "---" << std::endl;
}
