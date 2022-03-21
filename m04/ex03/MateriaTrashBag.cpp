#include "MateriaTrashBag.hpp"

MateriaTrashBag::MateriaTrashBag()
{
        arr = new AMateria* [1];
        capacity = 1;
        current = 0;
}

void MateriaTrashBag::push(AMateria* data)
{

        // if the number of elements is equal to the
        // capacity, that means we don't have space to
        // accommodate more elements. We need to double the
        // capacity
        if (current == capacity) {
                AMateria** temp = new AMateria* [2 * capacity];

                // copying old array elements to new array
                for (int i = 0; i < capacity; i++) {
                        temp[i] = arr[i];
                }

                // deleting previous array
                delete[] arr;
                capacity *= 2;
                arr = temp;
        }

        // Inserting data
        arr[current] = data;
        current++;
}

MateriaTrashBag::~MateriaTrashBag()
{
                for (int i = 0; i < capacity; i++) {
                        delete arr[i];
                }

        
}


//zero reason to copy trash, sorry
MateriaTrashBag &MateriaTrashBag::operator=(MateriaTrashBag const &other)
{
        return *this;
}

//same
MateriaTrashBag::MateriaTrashBag(MateriaTrashBag const &other)
{}
