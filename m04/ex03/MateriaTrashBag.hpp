#pragma once
#include "AMateria.hpp"

class MateriaTrashBag
{
 
    // arr is the integer pointer
    // which stores the address of our vector
    AMateria** arr;
    int capacity;
    int current;
 
public:
    // Default constructor to initialise
    // an initial capacity of 1 element and
    // allocating storage using dynamic allocation
    MateriaTrashBag();
    ~MateriaTrashBag();
    MateriaTrashBag(MateriaTrashBag const &other);
    MateriaTrashBag &operator=(MateriaTrashBag const &other);

 
    // Function to add an element at the last
    void push(AMateria* data);
};
