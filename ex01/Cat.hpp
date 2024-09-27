#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat();
        Cat &operator=(const Cat &copy);
        Cat(Cat &copy);
        ~Cat();
        const std::string getType() const;
        void makeSound() const;
};

#endif