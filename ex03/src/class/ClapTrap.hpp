/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeportie <jeportie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 11:46:23 by jeportie          #+#    #+#             */
/*   Updated: 2025/04/12 12:31:25 by jeportie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
#include <string>

class ClapTrap
{
public:
	ClapTrap(void);
	ClapTrap(std::string const name);
	ClapTrap(const ClapTrap& src);
	~ClapTrap(void);

	ClapTrap&	operator=(ClapTrap const & rhs);

	void		attack(const std::string& target);
	void		takeDamage(unsigned int amout);
	void		beRepaired(unsigned int amount);
 
	std::string	getName(void) const;
	int			getHp(void) const;
	int			getMp(void) const;
	int			getAtk(void) const;

	void		setName(std::string name);
	void		setHp(int hp);
	void		setMp(int mp);
	void		setAtk(int atk);

	std::string	toString(void) const; // serialise class to string

private:
	std::string	_name;
	int			_hp;
	int			_mp;
	int			_atk;
};

// Overload operator<< for output streaming
std::ostream& operator<<(std::ostream& out, const ClapTrap& in);

#endif  // ***************************************************** CLAPTRAP_HPP //
