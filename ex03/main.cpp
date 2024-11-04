/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 17:59:27 by btomlins          #+#    #+#             */
/*   Updated: 2024/11/04 12:40:17 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ClapTrap clap("Clappy");

    clap.attack("Target1");
    clap.takeDamage(3);
    clap.beRepaired(5);

    std::cout << "Creating ScavTrap..." << std::endl;
    ScavTrap scav("Scavvy");
    clap.attack("Target2");
    clap.takeDamage(30);
    clap.beRepaired(10);
    scav.guardGate();

    std::cout << "Creating FragTrap..." << std::endl;
    FragTrap frag("Fraggy");
    frag.attack("Target3");
    frag.takeDamage(20);
    frag.beRepaired(15);
    frag.highFiveGuys();
    
    return(0);
}