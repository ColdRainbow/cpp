#pragma once
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	public:
		FragTrap(std::string const &name);
		FragTrap(FragTrap const &other);
		FragTrap &operator=(FragTrap const &other);
		~FragTrap();

		void highFivesGuys(void);
};
