/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolecomt <jolecomt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 15:34:31 by jolecomt          #+#    #+#             */
/*   Updated: 2024/03/26 16:22:35 by jolecomt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	protected:
	public:
		ScavTrap();
		ScavTrap(const ScavTrap &other);
		~ScavTrap();
		void attack(const std::string& target);
		void guardGate();
		ScavTrap &operator=(const ScavTrap &other);
};

#endif