#include "Ice.hpp"
#include "ICharacter.hpp"
#include <iostream>

Ice::Ice() : AMateria("ice")
{}

Ice::~Ice()
{}

void Ice::use(ICharacter& target)
{
        std::cout << "* shoots an ice bolt at  " << target.getName() << " *" << std::endl;
}

Ice::Ice(Ice const &other) : AMateria(other.type)
{}

Ice* Ice::clone() const
{
        return new Ice();
}


