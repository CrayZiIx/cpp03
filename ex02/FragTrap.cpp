/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolecomt <jolecomt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 16:35:30 by jolecomt          #+#    #+#             */
/*   Updated: 2024/03/26 17:07:34 by jolecomt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this->HitPoints = 100;
	this->Energy = 100;
	this->Attack = 30;
	std::cout<<"Constructor FragTrap called with no parameters"<<std::endl;
	return ;
}

FragTrap::FragTrap(const std::string& _name) : ClapTrap()
{
	std::cout<<"Constructor called with ref to clapTrap's name called"<<std::endl;
	this->name = _name;
	this->HitPoints = 100;
	this->Energy = 50;
	this->Attack = 20;
	return ;
}

FragTrap::FragTrap(const FragTrap& _fragTrap) : ClapTrap(_fragTrap)
{
	std::cout<<"Constructor FragTrap called with ref to clapTrap obj called"<<std::endl;
	return ;
}

FragTrap::~FragTrap() 
{
	std::cout<<"Destructor FragTrap called with no parameters"<<std::endl;
	return ;
}

void FragTrap::attack(const std::string& target)
{
	if (this->Energy > 0 && this->HitPoints > 0)
	{
		this->Energy--;
		std::cout<<"FragTrap : "<<this->name<<" attacks "<<target<<", causing "<<this->Attack<<" points of damage!"<<std::endl;
	}
	else 
	{
		std::cout<<"FragTrap : "<<this->name<<" has "<<this->Energy<<" energy and "<<this->HitPoints<<" health point ..."<<std::endl;
	}
	return ;
}

void FragTrap::highFivesGuys()
{
	std::cout<<"FragTrap : "<<this->name<<" asking for a High Five !"<<std::endl;
	return ;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	this->name = other.name;
	this->Attack = other.Attack;
	this->Energy = other.Energy;
	this->HitPoints = other.HitPoints;
	return (*this);
}
	