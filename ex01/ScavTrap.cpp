/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolecomt <jolecomt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 15:34:33 by jolecomt          #+#    #+#             */
/*   Updated: 2024/03/26 17:08:11 by jolecomt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->HitPoints = 100;
	this->Energy = 50;
	this->Attack = 20;
	std::cout<<"Constructor ScavTrap called with no parameters"<<std::endl;
	return ;
}

ScavTrap::ScavTrap(const std::string& _name) : ClapTrap()
{
	std::cout<<"Constructor called with ref to clapTrap's name called"<<std::endl;
	this->name = _name;
	this->HitPoints = 100;
	this->Energy = 50;
	this->Attack = 20;
	return ;
}

ScavTrap::ScavTrap(const ScavTrap& _scavTrap) : ClapTrap(_scavTrap)
{
	std::cout<<"Constructor ScavTrap called with ref to clapTrap obj called"<<std::endl;
	return ;
}

ScavTrap::~ScavTrap() 
{
	std::cout<<"Destructor ScavTrap called with no parameters"<<std::endl;
	return ;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->Energy > 0 && this->HitPoints > 0)
	{
		this->Energy--;
		std::cout<<"ScavTrap : "<<this->name<<" attacks "<<target<<", causing "<<this->Attack<<" points of damage!"<<std::endl;
	}
	else 
	{
		std::cout<<"ScavTrap : "<<this->name<<" has "<<this->Energy<<" energy and "<<this->HitPoints<<" health point ..."<<std::endl;
	}
	return ;
}

void ScavTrap::guardGate()
{
	std::cout<<"ScavTrap : "<<this->name<<" is now in Gate keeper mode"<<std::endl;
	return ;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	this->name = other.name;
	this->Attack = other.Attack;
	this->Energy = other.Energy;
	this->HitPoints = other.HitPoints;
	return (*this);
}
	