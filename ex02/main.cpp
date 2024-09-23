#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
    Animal *animals[10];
    int i = 0;
    while (i < 10)
    {
        if (i < 5)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
        i++;
    }
    i = 0;
    while (i < 10)
        delete animals[i++];
}
