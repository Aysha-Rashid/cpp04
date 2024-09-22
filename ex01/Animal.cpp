#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

Animal::Animal() : type("") { std::cout << "Animal Constructor is being called" << std::endl; }
Animal::Animal(Animal &copy)
{
    std::cout << "Animal Copy Constuctor is being called" << std::endl;
    if (this != &copy)
        this->type = copy.type;
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
    std::cout << "Dog Constructor is being called" << std::endl;
    this->DogBrain = new Brain();
    this->type = "Dog";
}
Dog::Dog(Dog &copy) : Animal()
{
    std::cout << "Dog Copy Constuctor is being called" << std::endl;
    if (this != &copy)
    {
        this->type = copy.type;
        this->DogBrain = copy.DogBrain;
    }
}

Dog &Dog::operator=(const Dog &copy)
{
    std::cout << "Dog Copy Assignment Constructor is Called" << std::endl;
    if (this != &copy)
    {
        this->type = copy.type;
        this->DogBrain = copy.DogBrain;
    }
    return (*this);
}

Cat::Cat() : Animal()
{
    std::cout << "Cat Constructor is being called" << std::endl;
    this->CatBrain = new Brain();
    this->type = "Cat";
}
Cat::Cat(Cat &copy) : Animal()
{
    std::cout << "Cat Copy Constuctor is being called" << std::endl;
    if (this != &copy)
    {
        this->type = copy.type;
        this->CatBrain = copy.CatBrain;
    }
}

Cat &Cat::operator=(const Cat &copy)
{
    std::cout << "Cat Copy Assignment Constructor is Called" << std::endl;
    if (this != &copy)
    {
        this->type = copy.type;
        this->CatBrain = copy.CatBrain;
    }
    return (*this);
}

Animal::~Animal() {std::cout << "Animal Destructor is being called" << std::endl;}
Cat::~Cat() {delete this->CatBrain; std::cout << "Cat Destructor is being called" << std::endl;}
Dog::~Dog() { delete this->DogBrain; std::cout << "Dog Destructor is being called" << std::endl;}
const std::string Cat::getType(void) const {return (this->type);}
const std::string Dog::getType(void) const {return (this->type);}
const std::string Animal::getType(void) const {return (this->type);}
void Animal::makeSound(void) const {std::cout << "Animal sound Nothing" << std::endl;}
void Cat::makeSound(void) const {std::cout << "Cat sound : meow!" << std::endl;}
void Dog::makeSound(void) const {std::cout << "Dog sound : Rouf!" << std::endl;}
