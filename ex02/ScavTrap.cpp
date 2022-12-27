/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 17:33:45 by ebouabba          #+#    #+#             */
/*   Updated: 2022/12/27 17:33:46 by ebouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "Default Constructor called" << std::endl;
    set_Hit_points(100);
    set_Energy_points(50);
    set_Attac_damage(20);
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "parammetrs Constructor called" << std::endl;
    set_Hit_points(100);
    set_Energy_points(50);
    set_Attac_damage(20);
}

void ScavTrap::attack(const std::string &target)
{
    if (this->get_Energy_points() > 0)
    {
        std::cout << "ScavTrap " << this->get_name() << " attacks " << target << " causing " << this->get_Attac_damage() << " points of damage!" << std::endl;
        set_Energy_points(get_Energy_points() - 1);
    }
    else
        std::cout << "ScavTrap " << this->get_name() << " is not attacks" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->get_name() << " is now in Gate keeper mode" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destructor called" << std::endl;
}
