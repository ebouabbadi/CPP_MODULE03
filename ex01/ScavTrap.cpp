/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 17:33:19 by ebouabba          #+#    #+#             */
/*   Updated: 2022/12/28 13:29:50 by ebouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap Default Constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap parammetrs Constructor called" << std::endl;
    this->_Hit_points = 100;
    this->_Energy_points = 50;
    this->_Attac_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
    std::cout << "ScavTrap Copy Constructor called" << std::endl;
    *this = copy;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &C)
{
    std::cout << "ScavTrap Copy assignment operator called" << std::endl;
    ClapTrap::operator=(C);
    return (*this);
}

void ScavTrap::attack(const std::string &target)
{
    if (this->_Energy_points > 0 && this->_Hit_points > 0)
    {
        std::cout << "ScavTrap " << this->name << " attacks " << target << " causing " << this->_Attac_damage << " points of damage!" << std::endl;
        this->_Energy_points--;
    }
    else
        std::cout << "ScavTrap " << this->name << " is not attacks" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->name << " is now in Gate keeper mode" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor called" << std::endl;
}
