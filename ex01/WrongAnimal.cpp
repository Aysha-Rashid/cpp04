#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("") { std::cout << "WrongAnimal Constructor is being called" << std::endl; }
WrongAnimal::WrongAnimal(WrongAnimal &copy)
{
    if (this != &copy)
        this->type = copy.type;
    std::cout << "WrongAnimal Copy Constuctor is being called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy)
{
    std::cout << "WrongAnimal Copy Assignment Constructor is Called" << std::endl;
    if (this != &copy)
        this->type = copy.type;
    return (*this);
}

WrongCat::WrongCat() : WrongAnimal()
{
    this->type = "WrongCat";
    std::cout << "WrongCat Constructor is being called" << std::endl;
}
WrongCat::WrongCat(WrongCat &copy) : WrongAnimal()
{
    if (this != &copy)
        this->type = copy.type;
    std::cout << "WrongCat Copy Constuctor is being called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &copy)
{
    std::cout << "WrongCat Copy Assignment Constructor is Called" << std::endl;
    if (this != &copy)
        this->type = copy.type;
    return (*this);
}

WrongAnimal::~WrongAnimal() {std::cout << "WrongAnimal Destructor is being called" << std::endl;}
WrongCat::~WrongCat() {std::cout << "WrongCat Destructor is being called" << std::endl;}
const std::string WrongCat::getType(void) const {return (this->type);}
const std::string WrongAnimal::getType(void) const {return (this->type);}
void WrongAnimal::makeSound(void) const {std::cout << "WrongAnimal sound Nothing" << std::endl;}
void WrongCat::makeSound(void) const {std::cout << "WrongCat sound : meow!" << std::endl;}
