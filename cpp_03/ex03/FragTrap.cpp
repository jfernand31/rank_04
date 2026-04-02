#include "FragTrap.hpp"
#include <iostream>
#include <string>

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30) 
{
	std::cout << "ClapTrap " << name << " was promoted to FragTrap " << name << std::endl;
}
FragTrap::~FragTrap()
{ 
	std::cout << name << " was demoted for not collecting enough high fives\n";
}

void FragTrap::attack(const std::string &target) {
  if (ep > 0 && hp > 0) {
    std::cout << "FragTrap " << name << " attacks " << target << ", causing "
              << atk << " points of damage!\n";
    ep--;
  }
  else if(ep <= 0)
    std::cout << "ClapTrap " << name << " has no power for that action\n";
  else if(hp <= 0)
    std::cout << name << " is out of order, please come back later.\n";
}

void FragTrap::takeDamage(unsigned int amount) {
  if (hp > 0) {
    std::cout << "FragTrap " << name << " takes " << amount
              << " points of damage!\n";
    hp -= amount;
  } else
    std::cout << "Please stop hitting FragTrap " << name
              << ". I don't have the money to repair it.\n";
}

void FragTrap::beRepaired(unsigned int amount) {
  if (hp <= 0)
    std::cout << name << " is out of order, please come back later.\n";
  {
    return ;
  }
  if (hp < maxHP) {
    std::cout << "FragTrap " << name << " got hit by lightning and gained "
              << amount << " hit points back\n";
    hp += amount;
    ep--;
    if (hp > maxHP)
      hp = maxHP;
  }
}

void  FragTrap::highFivesGuys(void)
{
  std::cout << name << " is asking if it can be giben sum high fives, pls\n";
}
