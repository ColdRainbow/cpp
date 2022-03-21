#include "Cure.hpp"
#include "ICharacter.hpp"
#include <iostream>

Cure::Cure() : AMateria("cure")
{}

Cure::~Cure()
{}

void Cure::use(ICharacter& target)
{
        std::cout << "* heals  " << target.getName() << "'s wounds *" << std::endl;
}

Cure::Cure(Cure const &other) : AMateria(other.type)
{}

Cure* Cure::clone() const
{
        return new Cure();
}


