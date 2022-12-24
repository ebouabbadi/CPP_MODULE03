#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    this->name = name;
    this->_Hit_points = 10;
    this->_Energy_points = 10;
    this->_Attac_damage = 0;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &C)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->_Hit_points = C._Hit_points;
    this->_Energy_points = C._Energy_points;
    this->_Attac_damage = C._Attac_damage;
    return (*this);
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
    std::cout << "Copy Constructor called" << std::endl;
    *this = copy;
}

void ClapTrap::attack(const std::string &target)
{
    if (this->_Energy_points > 0)
    {
        std::cout << "ClapTrap " << this->name << " attacks " << target << " causing " << this->_Attac_damage << " points of damage!" << std::endl;
        this->_Energy_points--;
    }
    else
        std::cout << "ClapTrap " << this->name << " is not attacks" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage!" << std::endl;
    if (this->_Hit_points > amount)
        this->_Hit_points -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "ClapTrap " << this->name << " repairing " << amount << " points!" << std::endl;
    this->_Energy_points--;
    this->_Hit_points += amount;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}