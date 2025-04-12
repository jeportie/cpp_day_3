/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeportie <jeportie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 13:45:10 by jeportie          #+#    #+#             */
/*   Updated: 2025/04/12 14:05:29 by jeportie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src/class/ClapTrap.hpp"
#include "src/class/ScavTrap.hpp"
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
	
	std::cout << std::endl << "End of program - watch destruction order:" << std::endl;
	return (0);
}
