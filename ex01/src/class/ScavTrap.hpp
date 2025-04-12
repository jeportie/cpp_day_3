/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeportie <jeportie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 14:47:15 by jeportie          #+#    #+#             */
/*   Updated: 2025/04/12 14:47:24 by jeportie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
# include <iostream>

class ScavTrap : ClapTrap
{
public:
	ScavTrap(void);
	ScavTrap(int const fooNb);
	ScavTrap(ScavTrap const & src);
	~ScavTrap(void);

	ScavTrap & operator=(ScavTrap const & rhs);

	int getFoo(void) const;
	std::string toString(void) const; // serialise class to string

private:
	int _foo;
};

// Overload operator<< for output streaming
std::ostream & operator<<(std::ostream & out, ScavTrap const & in);

#endif  // ***************************************************** SCAVTRAP_HPP //
