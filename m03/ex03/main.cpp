#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	ClapTrap	john("John");
	ScavTrap	paul("Paul");
	FragTrap	george("George");
	DiamondTrap	ringo("Ringo");

	std::cout << "---" << std::endl;

	john.attack("Paul");
	paul.takeDamage(5);
	std::cout << "---" << std::endl;

	paul.attack("George");
	george.takeDamage(10);
	std::cout << "---" << std::endl;

	george.attack("Ringo");
	ringo.takeDamage(15);
	std::cout << "---" << std::endl;

	ringo.attack("John");
	john.takeDamage(20);
	std::cout << "---" << std::endl;

	john.beRepaired(1);
	paul.beRepaired(2);
	george.beRepaired(3);
	ringo.beRepaired(4);
	std::cout << "---" << std::endl;

	george.highFivesGuys();
	paul.guardGate();
	ringo.whoAmI();
	std::cout << "---" << std::endl;
}
