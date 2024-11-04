/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 17:59:27 by btomlins          #+#    #+#             */
/*   Updated: 2024/11/04 12:16:51 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

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
    
    return(0);
}