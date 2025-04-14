/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeportie <jeportie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 17:10:24 by jeportie          #+#    #+#             */
/*   Updated: 2025/04/14 18:03:35 by jeportie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ostream>
#include "DiamondTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

DiamondTrap::DiamondTrap(void)
: ClapTrap("Bobby")
, ScavTrap()
, FragTrap()
, _name("Freddy")
{
    ClapTrap::setHp(FragTrap::getHp());
    ClapTrap::setMp(ScavTrap::getMp());
    ClapTrap::setAtk(FragTrap::getAtk());
    std::cout << "DiamondTrap default constructor called" << std::endl;
    return;
}

DiamondTrap::DiamondTrap(std::string const name)
: ClapTrap(name + "Boby")
, ScavTrap()
, FragTrap()
, _name(name)
{
    ClapTrap::setHp(FragTrap::getHp());
    ClapTrap::setMp(ScavTrap::getMp());
    ClapTrap::setAtk(FragTrap::getAtk());
    std::cout << "DiamondTrap parametric constructor called" << std::endl;
    return;
}

DiamondTrap::DiamondTrap(const DiamondTrap& src)
: ClapTrap(src)
, ScavTrap(src)
, FragTrap(src)
, _name(src._name)
{
    std::cout << "DiamondTrap copy constructor called" << std::endl;
    return;
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << "DiamondTrap Destructor called" << std::endl;
    return;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& rhs)
{
    std::cout << "DiamondTrap assignment operator called" << std::endl;
    if (this != &rhs)
    {
        ClapTrap::operator=(rhs);
        _name = rhs._name;
    }
    return *this;
}

void DiamondTrap::whoAmI(void) const
{
    std::cout << "I am " << _name << " and my ClapTrap name is " << ClapTrap::getName()
              << std::endl;
}

std::string DiamondTrap::getName(void) const { return (_name); }

std::ostream& operator<<(std::ostream& out, const DiamondTrap& in)
{
    out << "DiamondTrap(name=" << in.getName() << ")";
    return out;
}
