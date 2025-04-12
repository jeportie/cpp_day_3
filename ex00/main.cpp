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
#include <iostream>

int	main(void)
{
	std::cout << "========== TestProg ==========" << std::endl;
	std::cout << std::endl;
	std::cout << "==========  Robot1  ==========" << std::endl;
	ClapTrap	robot1("bob");
	robot1.attack("antoine");
	robot1.takeDamage(9);
	robot1.beRepaired(9);
	robot1.takeDamage(10);
	robot1.attack("antoine");
	robot1.beRepaired(10);
	std::cout << "==========  Robot2  ==========" << std::endl;
	ClapTrap	robot2;
	robot2.setMp(0);
	robot2.attack("bob");
	robot2.beRepaired(5);
	robot2.takeDamage(10);
	return (0);
}
