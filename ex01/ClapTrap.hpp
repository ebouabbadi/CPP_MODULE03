#include <iostream>

class ClapTrap
{
private:
    std::string name;
    int _Hit_points;
    int _Energy_points;
    int _Attac_damage;

public:
    ClapTrap(); /*Default constructor*/
    ClapTrap(std::string name); /*parammeters constructor*/
    ClapTrap(const ClapTrap &copy); /*copy constructor*/
    ClapTrap &operator=(const ClapTrap &C); /*copy asigemment operator*/
    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    ~ClapTrap(); /*Destructor*/
};