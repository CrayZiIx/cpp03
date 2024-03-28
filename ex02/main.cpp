/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolecomt <jolecomt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 23:56:44 by jolecomt          #+#    #+#             */
/*   Updated: 2024/03/26 17:22:19 by jolecomt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	ClapTrap _clapTest;
	ClapTrap _clapTestCpy(_clapTest);
	ClapTrap _clapTestName("Random");

	/**********TEST FOR PART 1************/
	_clapTest.takeDamage(10);
	_clapTest.attack("Adel");
	_clapTest.attack("Adel");
	_clapTest.attack("Adel");
	_clapTest.attack("Adel");
	_clapTest.attack("Adel");
	_clapTest.beRepaired(10);
	_clapTest.attack("Adel");
	_clapTest.attack("Adel");
	_clapTest.attack("Adel");
	_clapTest.attack("Adel");
	_clapTest.attack("Adel");
	_clapTest.attack("Adel");	
	_clapTest.attack("Adel");
	_clapTest.attack("Adel");
	_clapTest.attack("Adel");
	_clapTest.attack("Adel");
	_clapTest.attack("Adel");

	_clapTestCpy.takeDamage(10);
	_clapTestCpy.beRepaired(10);
	_clapTestCpy.attack("Medhi");

	_clapTestName.takeDamage(10);
	_clapTestName.beRepaired(10);
	_clapTestName.attack("mammot");
	std::cout<<std::endl<<std::endl<<std::endl<<std::endl;
	/**********TEST FOR PART 2************/
	ScavTrap _scavTest;
	ScavTrap _scavTestCpy(_scavTest);

	_scavTest.takeDamage(100);
	_scavTest.attack("Tmarie");
	_scavTest.beRepaired(50);
	_scavTest.attack("Tmarie");
	_scavTestCpy.guardGate();
	std::cout<<std::endl<<std::endl<<std::endl<<std::endl;
	/**********TEST FOR PART 3************/
	FragTrap _fragTest;
	FragTrap _fragTestCpy(_fragTest);

	_fragTest.takeDamage(100);
	_fragTest.attack("Almarico");
	_fragTest.beRepaired(50);
	_fragTest.attack("Almarico");
	_fragTestCpy.highFivesGuys();
	std::cout<<std::endl<<std::endl<<std::endl<<std::endl;
	return (0);
}