/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 17:32:56 by ebouabba          #+#    #+#             */
/*   Updated: 2022/12/27 17:32:56 by ebouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap c1("jim");
    ClapTrap c2("mehdi");
    ClapTrap c3("simo");
    c1.attack("attay");
    c2.attack("albarad");
    c3.attack("atanjia");
    c1.takeDamage(5);
    c2.takeDamage(9);
    c3.takeDamage(10);
    c1.beRepaired(10);
    c3.takeDamage(19);
    return 0;
}