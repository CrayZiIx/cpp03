/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolecomt <jolecomt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 23:56:44 by jolecomt          #+#    #+#             */
/*   Updated: 2024/03/26 15:14:39 by jolecomt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap _clapTest;
	ClapTrap _clapTestCpy(_clapTest);
	ClapTrap _clapTestName("Random");

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
}