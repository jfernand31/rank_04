#include "Dog.hpp"

Dog::Dog() : type("Dog") { std::cout << "Default Dog constructor called\n"; }

Dog::Dog(const Dog &other) : type(other.type) { std::cout << "Dog Copy Constructor called\n"; }

Dog Dog::operator=(const Dog &other)
{
    this->type = other.type;
    std::cout << "Dog copy assignment operator called\n";
}

Dog::~Dog() {std::cout << "Dog destructor called\n"; }

void    Dog::makeSound()
{
    std::cout <<"barks\n";
}