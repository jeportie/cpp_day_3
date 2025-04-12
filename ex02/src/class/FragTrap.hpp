/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeportie <jeportie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 17:00:46 by jeportie          #+#    #+#             */
/*   Updated: 2025/04/12 17:01:06 by jeportie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>

class FragTrap
{
public:
	FragTrap(void);
	FragTrap(int const fooNb);
	FragTrap(const FragTrap& src);
	~FragTrap(void);

	FragTrap& operator=(const FragTrap& rhs);

	int getFoo(void) const;
	std::string toString(void) const; // serialise class to string

private:
	int _foo;
};

// Overload operator<< for output streaming
std::ostream & operator<<(std::ostream & out, const FragTrap& in);

#endif  // ***************************************************** FRAGTRAP_HPP //
