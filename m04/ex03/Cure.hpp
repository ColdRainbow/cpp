#pragma once
#include "AMateria.hpp"

class Cure: public AMateria
{
        public:
                Cure();
                ~Cure();
                Cure(Cure const &other);
                Cure &operator=(Cure const &other);
                void use(ICharacter &target);
                Cure* clone() const;
};
