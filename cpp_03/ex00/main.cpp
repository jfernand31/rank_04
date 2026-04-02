#include "ClapTrap.hpp"
#include <iostream>
int main(void) {
  ClapTrap clap1("Trunks");
  ClapTrap clap2("Goten");

  clap1.attack(clap2.GetName());
  clap2.takeDamage(8);
  std::cout << clap2.GetName() << " HP: " << clap2.GetHP() << std::endl;
  std::cout << clap1.GetName() << " HP: " << clap1.GetHP() << std::endl;
  std::cout << clap2.GetName() << " EP: " << clap2.GetEP() << std::endl;
  std::cout << clap1.GetName() << " EP: " << clap1.GetEP() << std::endl;

  clap2.beRepaired(3);
  std::cout << clap2.GetName() << " HP: " << clap2.GetHP() << std::endl;
  std::cout << clap1.GetName() << " HP: " << clap1.GetHP() << std::endl;
  std::cout << clap2.GetName() << " EP: " << clap2.GetEP() << std::endl;
  std::cout << clap1.GetName() << " EP: " << clap1.GetEP() << std::endl;

  clap2.beRepaired(9);
  std::cout << clap2.GetName() << " HP: " << clap2.GetHP() << std::endl;
  std::cout << clap1.GetName() << " HP: " << clap1.GetHP() << std::endl;
  std::cout << clap2.GetName() << " EP: " << clap2.GetEP() << std::endl;
  std::cout << clap1.GetName() << " EP: " << clap1.GetEP() << std::endl;

  return (0);
}
