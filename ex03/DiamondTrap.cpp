/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:53:05 by btomlins          #+#    #+#             */
/*   Updated: 2024/11/04 13:08:57 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(const std::string &name)
    : ClapTrap(name + "_clap_name"), ScavTrap(name + "_clap_nane"), FragTrap(name + "_clap_name"), name(name)
{
    this->hitPoints = FragTrap::hitPoints;
    this->energyPoints = ScavTrap::energyPoints;
    this->attackDamage = FragTrap::attackDamage;

    std::cout << "DiamondTrap " << name << " created with HP: " << hitPoints
              << ", Energy: " << energyPoints << ", Attack Damage: " << attackDamage << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << name << " is destroyed." << std::endl;
}

void DiamondTrap::attack(const std::string &target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap name: " << name << ", ClapTrap name: " << ClapTrap::name << std::endl;
}