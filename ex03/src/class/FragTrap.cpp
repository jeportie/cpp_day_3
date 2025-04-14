/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeportie <jeportie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 17:02:34 by jeportie          #+#    #+#             */
/*   Updated: 2025/04/14 18:09:39 by jeportie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <ostream>
#include <sstream>
#include <string>
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl;
	setHp(100);
	setMp(100);
	setAtk(30);
	return;
}

FragTrap::FragTrap(std::string const name) : ClapTrap(name)
{
	std::cout << "FragTrap parametric constructor called" << std::endl;
	setHp(100);
	setMp(100);
	setAtk(30);
	return;
}

FragTrap::FragTrap(const FragTrap& src) : ClapTrap(src)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = src;
	return;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called" << std::endl;
	return;
}

FragTrap & FragTrap::operator=(const FragTrap& rhs)
{
	std::cout << "FragTrap assignment operator called" << std::endl;
	if (this != &rhs)
	{
		ClapTrap::operator=(rhs);
	}
	return (*this);
}

void FragTrap::highFivesGuys(void) const
{
	std::cout << getName()	<< " made a friendly Highfive to all his bros"
							<< std::endl;	
}

std::ostream & operator<<(std::ostream & out, const FragTrap& in)
{
	out << "The FragTrap named " << in.getName() 
		<< " has " << in.getHp() << " HP, " 
		<< in.getMp() << " MP, and " 
		<< in.getAtk() << " ATK";
	return (out);
}

std::string FragTrap::toString(void) const
{
	std::ostringstream oss;
	oss << "FragTrap(name=" << getName()
		<< "; hp=" << getHp() 
		<< "; mp=" << getMp() 
		<< "; atk=" << getAtk() 
		<< ")";
	return (oss.str());
}

