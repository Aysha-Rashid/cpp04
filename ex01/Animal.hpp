#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(Animal &copy);
        Animal &operator=(const Animal &copy);
        virtual ~Animal();
        const std::string getType() const;
        virtual void makeSound() const; // making it virtual distances all the sounds
};

#endif