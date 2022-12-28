/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 17:33:33 by ebouabba          #+#    #+#             */
/*   Updated: 2022/12/28 13:03:20 by ebouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap Default Constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap parammetrs Constructor called" << std::endl;
    this->_Hit_points = 100;
    this->_Energy_points = 100;
    this->_Attac_damage = 30;
}
FragTrap::FragTrap(const FragTrap &copy)
{
    std::cout << "FragTrap Copy Constructor called" << std::endl;
    *this = copy;
}

FragTrap &FragTrap::operator=(const FragTrap &C)
{
    std::cout << "FragTrap Copy assignment operator called" << std::endl;
    ClapTrap::operator=(C);
    return (*this);
}
FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor called" << std::endl;
}
void FragTrap::attack(const std::string &target)
{
    if (this->_Energy_points > 0)
    {
        std::cout << "FragTrap " << this->name << " attacks " << target << " causing " << this->_Attac_damage << " points of damage!" << std::endl;
        this->_Energy_points--;
    }
    else
        std::cout << "FragTrap " << this->name << " is not attacks" << std::endl;
}
void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->name << " high fives" << std::endl;
}