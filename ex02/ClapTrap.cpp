/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 17:33:27 by ebouabba          #+#    #+#             */
/*   Updated: 2022/12/27 17:33:27 by ebouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "parammetrs Constructor called" << std::endl;
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
    if (this->_Hit_points > (int)amount)
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

void ClapTrap::set_name(std::string name)
{
    this->name = name;
}
void ClapTrap::set_Hit_points(int H)
{
    this->_Hit_points = H;
}
void ClapTrap::set_Energy_points(int E)
{
    this->_Energy_points = E;
}
void ClapTrap::set_Attac_damage(int A)
{
    this->_Attac_damage = A;
}
std::string ClapTrap::get_name()
{
    return (this->name);
}
int ClapTrap::get_Hit_points()
{
    return (this->_Hit_points);
}
int ClapTrap::get_Energy_points()
{
    return (this->_Energy_points);
}
int ClapTrap::get_Attac_damage()
{
    return (this->_Attac_damage);
}