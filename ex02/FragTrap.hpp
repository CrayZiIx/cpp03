/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolecomt <jolecomt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 16:36:32 by jolecomt          #+#    #+#             */
/*   Updated: 2024/03/26 16:55:07 by jolecomt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	protected:
	public:
		FragTrap();
		FragTrap(const std::string& _name);
		FragTrap(const FragTrap &other);
		~FragTrap();
		void attack(const std::string& target);
		void highFivesGuys();
		FragTrap &operator=(const FragTrap &other);
};

#endif