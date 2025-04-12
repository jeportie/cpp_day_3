/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeportie <jeportie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 14:47:28 by jeportie          #+#    #+#             */
/*   Updated: 2025/04/12 14:47:37 by jeportie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <ostream>
# include <sstream>
# include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	setHp(100);
	setMp(50);
	setAtk(20);
	return;
}

ScavTrap::ScavTrap(std::string const name) : ClapTrap(name)
{
	std::cout << "ScavTrap parametric constructor called" << std::endl;
	setHp(100);
	setMp(50);
	setAtk(20);
	return;
}

ScavTrap::ScavTrap(ScavTrap const& src) : ClapTrap(src)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = src;
	return;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called" << std::endl;
	return;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs)
{
	std::cout << "ScavTrap assignment operator called" << std::endl;
	if (this != &rhs)
	{
		ClapTrap::operator=(rhs);
	}
	return (*this);
}

void ScavTrap::attack(const std::string& target)
{
	if (getHp() && getMp())
	{
		std::cout << "[ATTACK] ScavTrap "
				  << getName() << " attacks "
				  << target << ", causing "
				  << getAtk() << " points of damage!"
				  << std::endl;
		setMp(getMp() - 1);
	}
	else if (!getHp())
		std::cout << "[DEAD] " << getName() << " is dead - Attack not possible!" << std::endl;
	else
		std::cout << "[NO_MP] "<< getName() << " has no more mp - Attack not possible!" << std::endl;
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << getName() << " is now in Gate keeper mode." << std::endl;
}

std::ostream & operator<<(std::ostream & out, ScavTrap const & in)
{
	out << "The ScavTrap named " << in.getName() 
		<< " has " << in.getHp() << " HP, " 
		<< in.getMp() << " MP, and " 
		<< in.getAtk() << " ATK";
	return (out);
}

std::string ScavTrap::toString(void) const
{
	std::ostringstream oss;
	oss << "ScavTrap(name=" << getName()
		<< "; hp=" << getHp() 
		<< "; mp=" << getMp() 
		<< "; atk=" << getAtk() 
		<< ")";
	return (oss.str());
}

