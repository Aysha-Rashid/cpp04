#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
    int total = 10;
    Animal *animals[total];
    int i = 0;

    Dog nothing;
        Dog something = nothing;
    Dog things(nothing);

    Animal tiger;
        Animal leopard = tiger;
    Animal lion(leopard);
    while (i < total)
    {
        if (total / 2 < i)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
        i++;
    }
    i = 0;
    while (i < total)
        delete animals[i++];
}
