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

ScavTrap::ScavTrap(void)
: _foo(0)
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

ScavTrap::ScavTrap(int const fooNb)
: _foo(0)
{
	std::cout << "Parametric constructor called" << std::endl;
	return;
}

ScavTrap::ScavTrap(ScavTrap const& src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs)
{
	std::cout << "Assignment operator called" << std::endl;
	if (this != &rhs)
		this->_foo = rhs.getFoo();
	return (*this);
}

std::ostream & operator<<(std::ostream & out, ScavTrap const & in)
{
	out << "The value of _foo is : " << in.getFoo();
	return (out);
}

int ScavTrap::getFoo(void) const { return (_foo); }

std::string ScavTrap::toString(void) const
{
	std::ostringstream oss;
	oss << "ScavTrap(_foo=" << _foo << ")";
	return (oss.str());
}

