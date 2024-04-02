/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolecomt <jolecomt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 23:57:16 by jolecomt          #+#    #+#             */
/*   Updated: 2024/03/26 17:50:22 by jolecomt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

#define HEATLH 10
#define ENERGY 10
#define ATK    0
class ClapTrap
{
	protected:
		std::string name;
		unsigned int HitPoints;
		unsigned int Energy;
		unsigned int Attack;
	public:
		ClapTrap();
		ClapTrap(const ClapTrap &other);
		ClapTrap(const std::string& _name);
		virtual ~ClapTrap();
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		ClapTrap &operator=(const ClapTrap &other);
};

#endif