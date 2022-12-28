/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 17:33:22 by ebouabba          #+#    #+#             */
/*   Updated: 2022/12/27 18:39:19 by ebouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
    ScavTrap();                             /*Default constructor*/
    ScavTrap(std::string name);             /*parammeters constructor*/
    ScavTrap(const ScavTrap &copy);         /*copy constructor*/
    ScavTrap &operator=(const ScavTrap &C); /*copy asigemment operator*/
    ~ScavTrap();                            /*Destructor*/
    void attack(const std::string &target);
    void guardGate();
};

#endif