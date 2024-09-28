#include "Cat.hpp"

Cat::Cat() : Animal()
{
    this->brain = new Brain();
    std::cout << "Cat Constructor is being called" << std::endl;
    this->type = "Cat";
}
Cat::Cat(Cat &copy) : Animal()
{
    std::cout << "Cat Copy Constuctor is being called" << std::endl;
    if (this != &copy)
    {
        this->type = copy.type;
        this->brain = new Brain (*copy.brain);
    }
}
Cat &Cat::operator=(const Cat &copy)
{
    std::cout << "Cat Copy Assignment Constructor is Called" << std::endl;
    if (this != &copy)
    {
        this->type = copy.type;
        if (this->brain)
            delete this->brain;
        this->brain = new Brain (*copy.brain);
    }
    return (*this);
}
void Cat::makeSound(void) const {std::cout << "Cat sound : meow!" << std::endl;}
const std::string Cat::getType(void) const {return (this->type);}
Brain *Cat::getBrain(void) {return (this->brain);}
Cat::~Cat() {delete this->brain; std::cout << "Cat Destructor is being called" << std::endl;}
