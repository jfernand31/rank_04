#include "Cat.hpp"

Cat::Cat() : type("Cat") { std::cout << "Default Cat constructor called\n"; }

Cat::Cat(const Cat &other) : type(other.type) { std::cout << "Cat Copy Constructor called\n"; }

Cat Cat::operator=(const Cat &other)
{
    this->type = other.type;
    std::cout << "Cat copy assignment operator called\n";
}

Cat::~Cat() {std::cout << "Cat destructor called\n"; }

void    Cat::makeSound()
{
    std::cout <<"meows\n";
}