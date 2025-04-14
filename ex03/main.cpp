/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeportie <jeportie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 13:45:10 by jeportie          #+#    #+#             */
/*   Updated: 2025/04/14 18:08:18 by jeportie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src/class/ClapTrap.hpp"
#include "src/class/DiamondTrap.hpp"
#include "src/class/ScavTrap.hpp"
#include "src/class/FragTrap.hpp"
#include <iostream>

int	main(void)
{
	std::cout << "========== TestProg ==========" << std::endl;
	std::cout << std::endl;
	
	std::cout << "========== ClapTrap ==========" << std::endl;
	ClapTrap	robot1("Bob");
	robot1.attack("Antoine");
	robot1.takeDamage(9);
	robot1.beRepaired(9);
	robot1.takeDamage(10);
	robot1.attack("Antoine");
	robot1.beRepaired(10);
	
	std::cout << std::endl;
	std::cout << "========== ScavTrap ==========" << std::endl;
	
	// Test construction and destruction chaining
	std::cout << "Creating a ScavTrap..." << std::endl;
	ScavTrap scav1("Serena");
	
	// Test ScavTrap's methods
	scav1.attack("Enemy");
	scav1.takeDamage(30);
	scav1.beRepaired(20);
	scav1.guardGate();
	
	// Test with no energy points
	std::cout << std::endl << "Testing with no energy points:" << std::endl;
	ScavTrap scav2(scav1);
	scav2.setName("NoEnergy");
	scav2.setMp(0);
	scav2.attack("Target");
	
	// Test with no hit points
	std::cout << std::endl << "Testing with no hit points:" << std::endl;
	ScavTrap scav3;
	scav3.setName("NoHP");
	scav3.takeDamage(100);  // This should set HP to 0
	scav3.attack("Target");
	scav3.beRepaired(50);

	std::cout << "========== FragTrap ==========" << std::endl;
	
	// Test construction and destruction chaining
	std::cout << "Creating a FragTrap..." << std::endl;
	FragTrap frag1("Madeleine");
	
	// Test FragTrap's methods
	frag1.attack("Enemy");
	frag1.takeDamage(50);
	frag1.beRepaired(40);
	frag1.highFivesGuys();
	
	// Test with no energy points
	std::cout << std::endl << "Testing with no energy points:" << std::endl;
	FragTrap frag2(frag1);
	frag2.setName("NoEnergy");
	frag2.setMp(0);
	frag2.attack("Target");
	
	// Test with no hit points
	std::cout << std::endl << "Testing with no hit points:" << std::endl;
	FragTrap frag3;
	frag3.setName("NoHP");
	frag3.takeDamage(100);  // This should set HP to 0
	frag3.attack("Target");
	frag3.beRepaired(60);

    std::cout << "========== DiamondTrap ==========" << std::endl;
    DiamondTrap diamond("Shiny");

    diamond.attack("Enemy");
    diamond.takeDamage(20);
    diamond.beRepaired(10);
	diamond.highFivesGuys();
	diamond.guardGate();
    diamond.whoAmI();

    DiamondTrap diamond2;

    diamond2.attack("Enemy");
    diamond2.takeDamage(20);
    diamond2.beRepaired(10);
	diamond2.highFivesGuys();
	diamond2.guardGate();
    diamond2.whoAmI();
	diamond2.setMp(0);
	diamond2.beRepaired(60);

   DiamondTrap diamond3(diamond);

    diamond3.attack("Enemy");
    diamond2.takeDamage(20);
    diamond2.beRepaired(10);
	diamond3.highFivesGuys();
	diamond3.guardGate();
    diamond3.whoAmI();
	diamond3.takeDamage(100);
	diamond3.beRepaired(60);
	
	std::cout << std::endl << "End of program - watch destruction order:" << std::endl;
	return (0);
}
