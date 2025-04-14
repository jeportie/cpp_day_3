/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeportie <jeportie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 16:09:06 by jeportie          #+#    #+#             */
/*   Updated: 2025/04/14 17:38:07 by jeportie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
# include <iostream>

class DiamondTrap : public ScavTrap, public FragTrap
{
public:
	DiamondTrap(void);
	DiamondTrap(std::string const name);
	DiamondTrap(const DiamondTrap& src);
	~DiamondTrap(void);

	DiamondTrap& operator=(const DiamondTrap& rhs);

	std::string	getName(void) const;
	void		whoAmI(void) const;

	std::string toString(void) const; // serialise class to string

private:
	std::string _name;
};

// Overload operator<< for output streaming
std::ostream & operator<<(std::ostream & out, const DiamondTrap& in);

#endif  // ************************************************** DIAMONDTRAP_HPP //
