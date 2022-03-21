#pragma once
#include <string>
#include "IMateriaSource.hpp"

class AMateria;

class MateriaSource: public IMateriaSource
{
        private:
                AMateria* storage[4];
                void zero_storage();
        public:
                ~MateriaSource();
                MateriaSource();
                MateriaSource(MateriaSource const &other);
                MateriaSource &operator=(MateriaSource const &other);

                void learnMateria(AMateria*);
                AMateria* createMateria(std::string const & type);
};
