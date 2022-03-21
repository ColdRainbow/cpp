#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
    {
        Animal *animals[6];
        for (int i = 0; i < 6; i++)
        {
            if (i % 2)
                animals[i] = new Cat;
            else
                animals[i] = new Dog;
        }

        for (int i = 0; i < 6; i++)
            delete animals[i];
    }

    // {
    //     Brain catBrain;
    //     catBrain.ideas[0] = "mouse";
    //     Cat *cat = new Cat;
    //     cat->setBrain(catBrain);

    //     Cat *copyCat = new Cat;
    //     *copyCat = *cat;

    //     std::cout << "Cat brain: " << cat->getBrain().ideas[0] << std::endl;
    //     std::cout << "copyCat brain: " << copyCat->getBrain().ideas[0] << std::endl;

    //     delete cat;
    //     delete copyCat;
    // }

    return 0;
}

