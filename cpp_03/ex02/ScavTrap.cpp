#include "ScavTrap.hpp"
#include <iostream>
#include <string>

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20) {
  std::cout << name << " was promoted to ScavTrap\n";
}

ScavTrap::~ScavTrap() {
  std::cout << name
            << " was demoted because he was caught drinking vodka with juice\n";
}

void ScavTrap::guardGate() {
  std::cout << name << " is looking out for capitalist scum\n";
}

void ScavTrap::attack(const std::string &target) {
  if (ep > 0 && hp > 0) {
    std::cout << "ScavTrap " << name << " attacks " << target << ", causing "
              << atk << " points of damage!\n";
    ep--;
  }
  else if(ep <= 0)
    std::cout << "ClapTrap " << name << " has no power for that action\n";
  else if(hp <= 0)
    std::cout << name << " is out of order, please come back later.\n";
}

void ScavTrap::takeDamage(unsigned int amount) {
  if (hp > 0) {
    std::cout << "ScavTrap " << name << " takes " << amount
              << " points of damage!\n";
    hp -= amount;
  } else
    std::cout << "Please stop hitting ScavTrap " << name
              << ". I don't have the money to repair it.\n";
}

void ScavTrap::beRepaired(unsigned int amount) {
  if (hp <= 0)
  {
    std::cout << name << " is out of order, please come back later.\n";
    return ;
  }
  if (hp < maxHP) {
    std::cout << "ScavTrap " << name << " got hit by lightning and gained "
              << amount << " hit points back\n";
    hp += amount;
    ep--;
    if (hp > maxHP)
      hp = maxHP;
  }
}
