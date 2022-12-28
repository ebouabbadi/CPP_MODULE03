/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 17:33:12 by ebouabba          #+#    #+#             */
/*   Updated: 2022/12/27 17:33:12 by ebouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap c1("jim");
    ScavTrap s2("mehdi");
    c1.attack("attay");
    s2.attack("albarad");
    c1.takeDamage(5);
    s2.takeDamage(9);
    c1.beRepaired(10);
    s2.takeDamage(19);
    return (0);
}