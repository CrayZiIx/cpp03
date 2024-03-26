/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolecomt <jolecomt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 23:57:19 by jolecomt          #+#    #+#             */
/*   Updated: 2024/03/26 17:09:26 by jolecomt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Unnamed"), Health(HEATLH), Energy(ENERGY), Attack(ATK)
{
	std::cout<<"Constructor called with no parameters"<<std::endl;
}
ClapTrap::ClapTrap(const ClapTrap& _clapTrap)
{
	std::cout<<"Constructor called with ref to clapTrap obj called"<<std::endl;
	*this = _clapTrap;
	return ;
}

ClapTrap::ClapTrap(const std::string& _name) : Health(10), Energy(10), Attack(10)
{
	std::cout<<"Constructor called with ref to clapTrap's name called"<<std::endl;
	this->name = _name;
	return ;
}

ClapTrap::~ClapTrap()
{
	std::cout<<"Destructor called"<<std::endl;
	return ;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->Energy > 0 && this->Health > 0)
	{
		this->Energy--;
		std::cout<<"ClapTrap : "<<this->name<<" attacks "<<target<<", causing "<<this->Attack<<" points of damage!"<<std::endl;
	}
	else 
	{
		std::cout<<"ClapTrap : "<<this->name<<" has "<<this->Energy<<" energy and "<<this->Health<<" health point ..."<<std::endl;
	}
	return ;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->Health -= amount;
	std::cout<<"ClapTrap : "<<this->name<<" has taken "<<amount<<" damage"<<std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	this->Health += amount;
	std::cout<<"ClapTrap : "<<this->name<<" has been healed by "<<amount<<" health point"<<std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &other)
{
	this->name = other.name;
	this->Attack = other.Attack;
	this->Energy = other.Energy;
	this->Health = other.Health;
	return (*this);
}

