/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeportie <jeportie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 14:47:15 by jeportie          #+#    #+#             */
/*   Updated: 2025/04/14 16:11:53 by jeportie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
# include <iostream>
#include <string>

class ScavTrap : virtual public ClapTrap
{
public:
	ScavTrap(void);
	ScavTrap(std::string const name);
	ScavTrap(const ScavTrap& src);
	~ScavTrap(void);

	ScavTrap & operator=(ScavTrap const & rhs);

	void		attack(const std::string& target);
	void		guardGate(void);

	std::string	toString(void) const; // serialise class to string
};

// Overload operator<< for output streaming
std::ostream & operator<<(std::ostream & out, ScavTrap const & in);

#endif  // ***************************************************** SCAVTRAP_HPP //
