/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeportie <jeportie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 17:00:46 by jeportie          #+#    #+#             */
/*   Updated: 2025/04/14 16:11:44 by jeportie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"
# include <iostream>
#include <string>

class FragTrap : virtual public ClapTrap
{
public:
	FragTrap(void);
	FragTrap(std::string const name);
	FragTrap(const FragTrap& src);
	~FragTrap(void);

	FragTrap& operator=(const FragTrap& rhs);

	void		highFivesGuys(void) const;

	std::string toString(void) const; // serialise class to string
};

// Overload operator<< for output streaming
std::ostream & operator<<(std::ostream & out, const FragTrap& in);

#endif  // ***************************************************** FRAGTRAP_HPP //
