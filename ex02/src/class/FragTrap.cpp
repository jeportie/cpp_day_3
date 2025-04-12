/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeportie <jeportie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 17:02:34 by jeportie          #+#    #+#             */
/*   Updated: 2025/04/12 17:02:56 by jeportie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include <iostream>
# include <ostream>
# include <sstream>
# include "FragTrap.hpp"

FragTrap::FragTrap(void)
: _foo(0)
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

FragTrap::FragTrap(int const fooNb)
: _foo(0)
{
	std::cout << "Parametric constructor called" << std::endl;
	return;
}

FragTrap::FragTrap(const FragTrap& src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return;
}

FragTrap::~FragTrap(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

FragTrap & FragTrap::operator=(const FragTrap& rhs)
{
	std::cout << "Assignment operator called" << std::endl;
	if (this != &rhs)
		this->_foo = rhs.getFoo();
	return (*this);
}

std::ostream & operator<<(std::ostream & out, const FragTrap& in)
{
	out << "The value of _foo is : " << in.getFoo();
	return (out);
}

int FragTrap::getFoo(void) const { return (_foo); }

std::string FragTrap::toString(void) const
{
	std::ostringstream oss;
	oss << "FragTrap(_foo=" << _foo << ")";
	return (oss.str());
}

