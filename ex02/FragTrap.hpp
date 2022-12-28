/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 17:33:36 by ebouabba          #+#    #+#             */
/*   Updated: 2022/12/28 15:11:06 by ebouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
public:
    FragTrap();                             /*Default constructor*/
    FragTrap(std::string name);             /*parammeters constructor*/
    FragTrap(const FragTrap &copy);         /*copy constructor*/
    FragTrap &operator=(const FragTrap &C); /*copy asigemment operator*/
    ~FragTrap();                            /*Destructor*/
    void attack(const std::string &target);
    void highFivesGuys(void);
};

#endif