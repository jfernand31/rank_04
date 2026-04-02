#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <string>

class ClapTrap {
protected:
  std::string name;
  int  hp;
  int  ep;
  int  atk;
  int  maxHP;

public:
  ClapTrap(std::string name, int health, int energy, int attack);
  ~ClapTrap();
  void attack(const std::string &target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);
  std::string GetName(void) const;
  int GetHP(void) const;
  int GetEP(void) const;
};

#endif
