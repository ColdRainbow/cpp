#include "Character.hpp"
#include "AMateria.hpp"
#include <cstddef>
#include <string>
#include <iostream>


Character::Character()
{
        zero_inventory();
}

Character::~Character()
{
        for (int i=0; i<4; i++){
                if ( inventory [i] != NULL){
                        delete inventory[i];
                }
        }

}

void Character::copy_inventory(Character const &other)
{
        zero_inventory();

        for (int i=0; i<4; i++){
                if ( other.inventory [i] != NULL){
                        inventory[i] = other.inventory[i] ->clone();
                }else{
                        inventory[i] = NULL;
                }
        }
}

void Character::zero_inventory()
{
        for (int i=0; i<4; i++){
                if ( inventory [i] != NULL){
                        delete inventory[i];
                        inventory[i] = NULL;
                }
        }

}

Character::Character(Character const &other) : name(other.getName())
{
        copy_inventory(other);
}


Character &Character::operator=(Character const &other){
        name = other.getName();
        copy_inventory(other);
        return *this;
}

Character::Character(std::string const &name_) : name(name_)
{
        zero_inventory();
}

std::string const & Character::getName() const
{
        return name;
}

void Character::equip(AMateria* materia)
{
        if (materia == NULL){
                std::cout << "not equipping empty materia" << std::endl;
                return;
        }

        std::cout << "trying to equip " << materia->getType() << std::endl;
        for (int i=0; i<4; i++){
                if (inventory[i] == NULL){
                        inventory[i] = materia -> clone();
                        return;
                }
        }
}

void Character::unequip(int idx)
{
        if (inventory[idx] != NULL) {
                bag.push(inventory[idx]);
                inventory[idx]=NULL;
        }
}

void Character::use(int idx, ICharacter& target)
{
        std::cout << "shooting from idx " << idx << std::endl;
        if (inventory[idx] != NULL) {
                inventory[idx]->use(target);
        } else {
                std::cout << "no materia at the slot! " << std::endl;
        }

}
