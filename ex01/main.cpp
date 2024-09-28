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
    while (i < total)
    {
        if (total / 2 <= i)
        {
            animals[i] = new Dog();
        }
        else
            animals[i] = new Cat();
        i++;
    }
    i = 0;
    while (i < total)
        delete animals[i++];
    //-------------
    Dog dog1;
    Dog dog2(dog1);
    Dog dog3;
    // dog3.brain.setBrain("let's eat");
    dog3 = dog2;
    Dog dog4 = dog3;
    Dog ttemp;
    {
        Dog dog1 = ttemp;
    }
    // //-------------

}
