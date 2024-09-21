#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

Animal::Animal() : type("") { std::cout << "Animal Constructor is being called" << std::endl; }
Animal::Animal(Animal &copy)
{
    if (this != &copy)
        this->type = copy.type;
    std::cout << "Animal Copy Constuctor is being called" << std::endl;
}

Animal &Animal::operator=(const Animal &copy)
{
    std::cout << "Animal Copy Assignment Constructor is Called" << std::endl;
    if (this != &copy)
        this->type = copy.type;
    return (*this);
}

Dog::Dog() : Animal()
{
    this->type = "Dog";
    std::cout << "Dog Constructor is being called" << std::endl;
}
Dog::Dog(Dog &copy) : Animal()
{
    if (this != &copy)
        this->type = copy.type;
    std::cout << "Dog Copy Constuctor is being called" << std::endl;
}

Dog &Dog::operator=(const Dog &copy)
{
    std::cout << "Dog Copy Assignment Constructor is Called" << std::endl;
    if (this != &copy)
        this->type = copy.type;
    return (*this);
}

Cat::Cat() : Animal()
{
    this->type = "Cat";
    std::cout << "Cat Constructor is being called" << std::endl;
}
Cat::Cat(Cat &copy) : Animal()
{
    if (this != &copy)
        this->type = copy.type;
    std::cout << "Cat Copy Constuctor is being called" << std::endl;
}

Cat &Cat::operator=(const Cat &copy)
{
    std::cout << "Cat Copy Assignment Constructor is Called" << std::endl;
    if (this != &copy)
        this->type = copy.type;
    return (*this);
}

Animal::~Animal() {std::cout << "Animal Destructor is being called" << std::endl;}
Cat::~Cat() {std::cout << "Cat Destructor is being called" << std::endl;}
Dog::~Dog() { std::cout << "Dog Destructor is being called" << std::endl;}
const std::string Cat::getType(void) const {return (this->type);}
const std::string Dog::getType(void) const {return (this->type);}
const std::string Animal::getType(void) const {return (this->type);}
void Animal::makeSound(void) const {std::cout << "Animal sound Nothing" << std::endl;}
void Cat::makeSound(void) const {std::cout << "Cat sound : meow!" << std::endl;}
void Dog::makeSound(void) const {std::cout << "Dog sound : Rouf!" << std::endl;}
