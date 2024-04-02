/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolecomt <jolecomt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 23:57:19 by jolecomt          #+#    #+#             */
/*   Updated: 2024/03/26 16:14:12 by jolecomt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Unnamed"), HitPoints(HEATLH), Energy(ENERGY), Attack(ATK)
{
	std::cout<<"Constructor ClapTrap called with no parameters"<<std::endl;
}
ClapTrap::ClapTrap(const ClapTrap& _clapTrap)
{
	std::cout<<"Constructor ClapTrap called with ref to clapTrap obj called"<<std::endl;
	*this = _clapTrap;
	return ;
}

ClapTrap::ClapTrap(const std::string& _name) : HitPoints(HEATLH), Energy(ENERGY), Attack(ATK)
{
	std::cout<<"Constructor ClapTrap called with ref to clapTrap's name called"<<std::endl;
	this->name = _name;
	return ;
}

ClapTrap::~ClapTrap()
{
	std::cout<<"Destructor ClapTrap called"<<std::endl;
	return ;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->Energy > 0 && this->HitPoints > 0)
	{
		this->Energy--;
		std::cout<<"ClapTrap : "<<this->name<<" attacks "<<target<<", causing "<<this->Attack<<" points of damage!"<<std::endl;
	}
	else 
	{
		std::cout<<"ClapTrap : "<<this->name<<" has "<<this->Energy<<" energy and "<<this->HitPoints<<" health point ..."<<std::endl;
	}
	return ;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->HitPoints -= amount;
	std::cout<<"ClapTrap : "<<this->name<<" has taken "<<amount<<" damage"<<std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->Energy > 0 && this->HitPoints > 0)
	{
		this->Energy--;
		this->HitPoints += amount;
		std::cout<<"ClapTrap : "<<this->name<<" has been healed by "<<amount<<" health point"<<std::endl;
	}
	else 
	{
		std::cout<<"ClapTrap : "<<this->name<<" has "<<this->Energy<<" energy and "<<this->HitPoints<<" health point ..."<<std::endl;
	}
	return ;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &other)
{
	this->name = other.name;
	this->Attack = other.Attack;
	this->Energy = other.Energy;
	this->HitPoints = other.HitPoints;
	return (*this);
}

