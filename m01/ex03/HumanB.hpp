#ifndef __HUMANB_H__
#define __HUMANB_H__

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanB
{
	private:
		std::string _name;
		Weapon* _weapon;

	public:
		HumanB();
		HumanB(std::string name);
		~HumanB();
		void attack(void);
		void setWeapon(Weapon& weapon);
};

#endif
