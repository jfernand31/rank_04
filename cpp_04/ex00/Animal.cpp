#include "Animal.hpp"
#include <iostream>

Animal::Animal() : type("") {
  std::cout << "Animal default constructor called\n";
}

Animal::Animal(const Animal &other) : type(othr.type) {
  std::cout << "Animal copy constructor called\n";
}

Animal Animal::operator=(const Animal &other) {
  this->type = other.type;
  std::cout << "Animal copy assignment oprator called\n";
}

Animal::~Animal() { std::cout << "Animal destructor called\n"; }

void  Animal::makeSound()
{
  std::cout << "...\n";
}