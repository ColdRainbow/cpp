#include "MateriaSource.hpp"
#include "AMateria.hpp"

#include <iostream>


MateriaSource::MateriaSource()
{}

void MateriaSource::zero_storage()
{
        for (int i=0; i<4; i++){
                if ( storage [i] != NULL){
                        delete storage[i];
                        storage[i] = NULL;
                }
        }

}

MateriaSource::~MateriaSource()
{
        zero_storage();
}

MateriaSource::MateriaSource(MateriaSource const &other)
{
       zero_storage();
       for (int i=0; i<4; i++){
               storage[i] = other.storage[i];
       }
}

MateriaSource &MateriaSource::operator=(MateriaSource const &other)
{
       zero_storage();
       for (int i=0; i<4; i++){
               storage[i] = other.storage[i];
       }
       return *this;
}


void MateriaSource::learnMateria(AMateria* materia)
{
        for (int i=0; i<4; i++){
                if (storage[i] == NULL){
                        storage[i] = materia -> clone();
                        return;
                }
        }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
        std::cout << "trying to create " << type << std::endl;
       
        for (int i=0; i<4; i++){
                if (storage[i] != NULL && storage[i]->getType() == type){
                        return storage[i]->clone();
                }
        }
        return NULL;
}
