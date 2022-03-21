#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const Animal *meta = new Animal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    delete meta;
    delete j;
    delete i;

    std::cout << "----------------------------" << std::endl;

    const WrongAnimal *wrongMeta = new WrongAnimal();
    const WrongAnimal *wrongJ = (const WrongAnimal*) new WrongDog();
    const WrongAnimal *wrongI = (const WrongAnimal*) new WrongCat();
    std::cout << wrongJ->getType() << " " << std::endl;
    std::cout << wrongI->getType() << " " << std::endl;
    wrongI->makeSound(); //will not output the cat sound!
    wrongJ->makeSound();
    wrongMeta->makeSound();
    delete wrongMeta;
    delete wrongJ;
    delete wrongI;
    return 0;
}
