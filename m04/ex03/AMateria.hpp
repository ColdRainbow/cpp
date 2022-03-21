#include <string>
#pragma once

class ICharacter;

class AMateria
{
        protected:
                std::string type;
                AMateria();
        public:
                virtual ~AMateria();
                AMateria(AMateria const &other);
                AMateria(std::string const & type);
                AMateria &operator=(AMateria const &other);
                std::string const & getType() const; //Returns the materia type
                virtual AMateria* clone() const = 0;
                virtual void use(ICharacter& target);
};
