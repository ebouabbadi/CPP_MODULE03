/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 17:33:33 by ebouabba          #+#    #+#             */
/*   Updated: 2022/12/27 17:33:34 by ebouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "Default Constructor called" << std::endl;
    set_Hit_points(100);
    set_Energy_points(100);
    set_Attac_damage(30);
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "parammetrs Constructor called" << std::endl;
    set_Hit_points(100);
    set_Energy_points(100);
    set_Attac_damage(30);
}

FragTrap::~FragTrap()
{
    std::cout << "Destructor called" << std::endl;
}
void FragTrap::attack(const std::string &target)
{
    if (this->get_Energy_points() > 0)
    {
        std::cout << "FragTrap " << this->get_name() << " attacks " << target << " causing " << this->get_Attac_damage() << " points of damage!" << std::endl;
        set_Energy_points(get_Energy_points() - 1);
    }
    else
        std::cout << "FragTrap " << this->get_name() << " is not attacks" << std::endl;
}
void FragTrap::highFivesGuys(void)
{
     std::cout << "FragTrap " << this->get_name() << " high fives" << std::endl;
}