#pragma once
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	public:
		ScavTrap(std::string const &name);
		~ScavTrap();
		ScavTrap(ScavTrap const &other);
		ScavTrap &operator=(ScavTrap const &other);

		void guardGate();
};
