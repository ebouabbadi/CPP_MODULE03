#include "ClapTrap.hpp"

int main()
{
    ClapTrap m("mehdi");
    ClapTrap b("badr");
    ClapTrap s("simo");
    m.attack("attay");
    b.attack("albarad");
    s.attack("atanjia");
    m.takeDamage(5);
    b.takeDamage(9);
    s.takeDamage(10);
    m.beRepaired(10);
    m.takeDamage(19);
    return 0;
}