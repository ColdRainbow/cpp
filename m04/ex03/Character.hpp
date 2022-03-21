#pragma once

#include "ICharacter.hpp"
#include "MateriaTrashBag.hpp"
#include <string>

class Character : public ICharacter
{
        private:
                std::string name;
                AMateria* inventory[4];
                MateriaTrashBag bag;
                Character();
                void copy_inventory(Character const &other);
                void zero_inventory();
                
        public:
                ~Character();
                Character(std::string const & name);
                Character(Character const &other);
                Character &operator=(Character const &other);
                std::string const & getName() const;
                void equip(AMateria* m);
                void unequip(int idx);
                void use(int idx, ICharacter& target);
};
