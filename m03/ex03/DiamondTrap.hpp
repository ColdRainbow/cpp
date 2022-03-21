#pragma once
#include <iostream>
#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap
{
	private:
		std::string name;
		using FragTrap::hitPoints;
		using ScavTrap::energyPoints;
		using FragTrap::attackDamage;
	
	public:
		DiamondTrap(std::string const &name);
		DiamondTrap(DiamondTrap &origin);
		DiamondTrap &operator=(const DiamondTrap &origin);
		virtual ~DiamondTrap();

		void whoAmI();
		void attack(const std::string &target);
                std::string getName(void);
                void setName(std::string const &name);
};
