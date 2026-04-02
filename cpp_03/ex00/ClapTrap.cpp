#include "ClapTrap.hpp"
#include <iostream>
#include <string>

ClapTrap::ClapTrap(std::string name) : name(name), hp(10), ep(10), atk(0) {
  std::cout << name << " was assembled from scrap... It looks ok...\n";
}

ClapTrap::~ClapTrap() { std::cout << name << " was smashed to smithereens!\n"; }

std::string ClapTrap::GetName(void) const { return (name); }

int ClapTrap::GetHP() const { return (hp); }
int ClapTrap::GetEP() const { return (ep); }

void ClapTrap::attack(const std::string &target) {
  if (ep > 0 && hp > 0) {
    std::cout << "ClapTrap " << name << " attacks " << target << ", causing "
              << atk << " points of damage!\n";
    ep--;
  } else
    std::cout << "ClapTrap " << name << " has no power for that action\n";
}

void ClapTrap::takeDamage(unsigned int amount) {
  if (hp > 0) {
    std::cout << "ClapTrap " << name << " takes " << amount
              << " points of damage!\n";
    hp -= amount;
  } else
    std::cout << "Please stop hitting ClapTrap " << name
              << ". I don't have the money to repair it.\n";
}

void ClapTrap::beRepaired(unsigned int amount) {
  if (hp < 10) {
    std::cout << "ClapTrap " << name << " got hit by lightning and gained "
              << amount << " hit points back\n";
    hp += amount;
    ep--;
    if (hp > 10)
      hp = 10;
  }
}
