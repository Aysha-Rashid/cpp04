#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* w = new WrongCat();
    const WrongCat *wrongcat = new WrongCat();
    
    std::cout << "j type: " << j->getType() << " " << std::endl;
    std::cout << "i type: " << i->getType() << " " << std::endl;
    std::cout << "Wrongcat type: " << wrongcat->getType() << " " << std::endl;
    
    ((std::cout << "i = "), (i->makeSound()));
    ((std::cout << "j = "), (j->makeSound()));
    ((std::cout << "meta = "), (meta->makeSound()));

    // when the keyword virtual is not being used
    std::cout << "\e[0;31mw = ";
    w->makeSound();
    std::cout << "\e[m";

    std::cout << "wrongcat = ";
    wrongcat->makeSound();
    (delete meta, delete j, delete i, delete w, delete wrongcat);
    return 0;
}
