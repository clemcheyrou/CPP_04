
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main() 
{
	const Animal* meta = new Animal(); 
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* k = new WrongAnimal();
	const WrongAnimal* l = new WrongCat();

	std::cout << meta->getType() << std::endl;
	meta->makeSound(); 
	std::cout << j->getType() << std::endl;
	j->makeSound(); 
	std::cout << i->getType() << std::endl;
	i->makeSound(); 
	std::cout << k->getType() << std::endl;
	k->makeSound(); 
	std::cout << l->getType() << std::endl;
	l->makeSound(); 

	delete meta;
	delete j;
	delete i;
	delete k;
	delete l;

	const Animal	*(animal_array[4]);
	for (int i = 0; i < 4; i++)
		animal_array[i] = new Dog();
	for (int i = 0; i < 4; i++)
		delete animal_array[i];
	std::cout << std::endl;
}