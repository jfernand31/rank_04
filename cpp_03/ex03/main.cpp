#include "ClapTrap.hpp"
#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void) {
    std::cout << "=== CONSTRUCTION ===\n";
    ClapTrap clap("Trunks", 10, 10, 0);
    ScavTrap scav("Piccolo");
    FragTrap frag("Vegeta");

    std::cout << "\n=== SPECIAL ABILITIES ===\n";
    scav.guardGate();
    frag.highFivesGuys();

    std::cout << "\n=== ATTACKS ===\n";
    clap.attack("Goten");
    scav.attack("Goten");
    frag.attack("Goten");

    std::cout << "\n=== TAKING DAMAGE ===\n";
    clap.takeDamage(5);
    scav.takeDamage(50);
    frag.takeDamage(99);

    std::cout << "\n=== REPAIRING ===\n";
    clap.beRepaired(3);
    frag.beRepaired(50);

    std::cout << "\n=== EDGE CASES ===\n";
    frag.takeDamage(9999); // overkill
    frag.attack("someone"); // should fail, no hp
    frag.beRepaired(100);   // should fail, no hp

    std::cout << "\n=== DESTRUCTION ===\n";
}
