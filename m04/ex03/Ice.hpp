#pragma once
#include "AMateria.hpp"

class Ice: public AMateria
{
        public:
                Ice();
                ~Ice();
                Ice(Ice const &other);
                Ice &operator=(Ice const &other);
                void use(ICharacter &target);
                Ice* clone() const;
};
