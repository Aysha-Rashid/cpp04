#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main( void )
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	// const Animal *some = new Animal();

	delete j;
	delete i;

	Dog basic;
		Dog tmp = basic;
	Animal* animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };
	for ( int i = 0; i < 4; i++ ) {
		animals[i]->makeSound();
		delete animals[i];
	}
	return 0;
}