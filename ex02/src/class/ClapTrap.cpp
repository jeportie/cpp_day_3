/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeportie <jeportie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 11:47:15 by jeportie          #+#    #+#             */
/*   Updated: 2025/04/12 14:28:55 by jeportie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <ostream>
# include <sstream>
#include <string>
# include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
: _hp(10)
, _mp(10)
, _atk(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
	setName("Default");
	return;
}

ClapTrap::ClapTrap(std::string const name)
: _name(name)
, _hp(10)
, _mp(10)
, _atk(0)
{
	std::cout << "ClapTrap parametric constructor called" << std::endl;
	return;
}

ClapTrap::ClapTrap(const ClapTrap& src)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = src;
	return;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destructor called" << std::endl;
	return;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& rhs)
{
	std::cout << "ClapTrap assignment operator called" << std::endl;
	if (this != &rhs)
    {
        this->_name = rhs.getName();
        this->_hp = rhs.getHp();
        this->_mp = rhs.getMp();
        this->_atk = rhs.getAtk();
    }
	return (*this);
}

std::ostream & operator<<(std::ostream & out, ClapTrap const & in)
{
	std::cout << "Out Redirection operator called" << std::endl;
	out	<< "The value of _name is : " << in.getName()
		<< "; The value of _hp is : " << in.getHp()
		<< "; The value of _mp is : " << in.getMp()
		<< "; The value of _atk is : " << in.getAtk();
	return (out);
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_hp && this->_mp)
	{
		std::cout << "[ATTACK] "
				  << _name << " attacks "
				  << target << ", causing "
				  << _atk << " point of damage!"
				  << std::endl;
		this->_mp--;
	}
	else if (!this->_hp)
		std::cout << "[DEAD] " << _name << " is dead - Attack not possible!" << std::endl;
	else
		std::cout << "[NO_MP]"<< _name << " has no more mp - Attack not possible!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hp && this->_mp)
	{
		std::cout << "[REPAIR] "
				  << _name << " repairs itself... "
				  << std::endl
				  << amount << " hp restored!"
				  << std::endl;
		this->_hp += amount;
		this->_mp--;
		std::cout << "==> Hp left: " << _hp
				  << " ==> Mp left: " << _mp
				  << std::endl;
	}
	else if (!this->_hp)
		std::cout << "[DEAD] "<< _name << " is dead - Repare not possible!" << std::endl;
	else
		std::cout << "[NO_MP]"<< _name << " has no more mp - Repare not possible!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "[DAMAGE] "
			  << _name << " has taken "
			  << amount << " point of damage!"
			  << std::endl;

    if (amount >= (unsigned int)_hp)
    {
        _hp = 0;
        std::cout << _name << " has died" << std::endl;
    }
    else 
	{
		_hp -= amount;
	}
	std::cout << "==> Hp left: " << _hp
			  << " ==> Mp left: " << _mp
			  << std::endl;
}

std::string ClapTrap::getName(void) const { return (_name); }

int ClapTrap::getHp(void) const { return (_hp); }

int ClapTrap::getMp(void) const { return (_mp); }

int ClapTrap::getAtk(void) const { return (_atk); }

void ClapTrap::setName(std::string name) { _name = name; }

void ClapTrap::setHp(int hp) { _hp = hp; }

void ClapTrap::setMp(int mp) { _mp = mp; }

void ClapTrap::setAtk(int atk) { _atk = atk; }

std::string ClapTrap::toString(void) const
{
	std::ostringstream oss;
	oss << "ClapTrap(_name=" << _name
		<< "; _hp=" << _hp 
		<< "; _mp=" << _mp 
		<< "; _atk=" << _atk 
		<< ")";
	return (oss.str());
}
