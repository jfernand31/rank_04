#include "ClapTrap.hpp"
#include <iostream>
#include "ScavTrap.hpp"

int main(void) {
  ClapTrap  clap1("Trunks", 10, 10, 0);
  ClapTrap  clap2("Goten", 10, 10, 0);
  ScavTrap  scav1("Piccolo");

  scav1.guardGate();
  clap1.attack(clap2.GetName());
  clap1.attack(scav1.GetName());
  clap2.takeDamage(8);
  std::cout << clap2.GetName() << " HP: " << clap2.GetHP() << std::endl;
  std::cout << clap1.GetName() << " HP: " << clap1.GetHP() << std::endl;
  std::cout << scav1.GetName() << " HP: " << scav1.GetHP() << std::endl;
  std::cout << clap2.GetName() << " EP: " << clap2.GetEP() << std::endl;
  std::cout << clap1.GetName() << " EP: " << clap1.GetEP() << std::endl;
  std::cout << scav1.GetName() << " EP: " << scav1.GetEP() << std::endl;
  
  clap2.beRepaired(3);
  std::cout << clap2.GetName() << " HP: " << clap2.GetHP() << std::endl;
  std::cout << clap1.GetName() << " HP: " << clap1.GetHP() << std::endl;
  std::cout << scav1.GetName() << " HP: " << scav1.GetHP() << std::endl;
  std::cout << clap2.GetName() << " EP: " << clap2.GetEP() << std::endl;
  std::cout << clap1.GetName() << " EP: " << clap1.GetEP() << std::endl;
  std::cout << scav1.GetName() << " EP: " << scav1.GetEP() << std::endl;

  clap2.beRepaired(9);
  std::cout << clap2.GetName() << " HP: " << clap2.GetHP() << std::endl;
  std::cout << clap1.GetName() << " HP: " << clap1.GetHP() << std::endl;
  std::cout << scav1.GetName() << " HP: " << scav1.GetHP() << std::endl;
  std::cout << clap2.GetName() << " EP: " << clap2.GetEP() << std::endl;
  std::cout << clap1.GetName() << " EP: " << clap1.GetEP() << std::endl;
  std::cout << scav1.GetName() << " EP: " << scav1.GetEP() << std::endl;

  return (0);
}
