#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(WrongAnimal &copy);
        WrongAnimal &operator=(const WrongAnimal &copy);
        ~WrongAnimal();
        const std::string getType() const;
        void makeSound() const;
};

#endif