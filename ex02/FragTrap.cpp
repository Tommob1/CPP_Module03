/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:25:45 by btomlins          #+#    #+#             */
/*   Updated: 2024/11/04 12:40:23 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    std::cout << "FragTrap " << name << " created with HP: " << hitPoints
              << ", Energy: " << energyPoints << ", Attack Damage: " << attackDamage << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << name << " is destroyed." << std::endl;
}

void FragTrap::attack(const std::string &target)
{
    if (hitPoints <= 0 || energyPoints <= 0)
    {
        std::cout << "FragTrap " << name << " has no energy or hit points left to attack!" << std::endl;
        return;
    }
    energyPoints--;
    std::cout << "FragTrap " << name << " attacks " << target
              << ", causing " << attackDamage << " points of damage!" << std::endl;
}

void FragTrap::highFiveGuys()
{
    std::cout << "FragTrap " << name << " requests high fives from everyone!" << std::endl;
}