/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 17:59:27 by btomlins          #+#    #+#             */
/*   Updated: 2024/11/02 21:03:44 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap clap("Clappy");

    clap.attack("Target1");
    clap.takeDamage(3);
    clap.beRepaired(5);

    clap.attack("Target2");
    clap.takeDamage(15);
    clap.beRepaired(10);
    
    return(0);
}