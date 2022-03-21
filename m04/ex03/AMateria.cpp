#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

AMateria::AMateria()
{}

AMateria::~AMateria()
{}

AMateria::AMateria(std:: string const &type_) : type(type_)
{
}

AMateria::AMateria(AMateria const &other) : type(other.getType()) {
}

AMateria &AMateria::operator=(AMateria const &other)
{
        type = other.getType();
        return *this;
}

std::string const & AMateria::getType() const
{
        return type;
}

void AMateria::use(ICharacter& target)
{

        std::cout << "unknown Materia is shoot at a character " << target.getName() << std::endl ;

}
