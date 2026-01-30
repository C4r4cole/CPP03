/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoulin <fmoulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 17:25:30 by fmoulin           #+#    #+#             */
/*   Updated: 2026/01/30 19:41:19 by fmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	golgoth("Golgoth");
	ClapTrap	pietro(golgoth);
	ClapTrap	caracole("Caracole");
	ClapTrap	oroshi("Oroshi");
	ClapTrap	dubkaH("Horst");
	ClapTrap	dubkaK("Karst");
	ScavTrap	sov("Sov");
	std::cout << std::endl;
	
	dubkaH = dubkaK;
	
	golgoth.attack("Erg");
	golgoth.setAttackDamage(2);
	for (int i = 0; i < 12; i++)
	{
		golgoth.attack("Coriolis");
	}
	std::cout << std::endl;
	
	sov.attack("Firost");
	std::cout << std::endl;

	sov.guardGate();
	std::cout << std::endl;
	
	for (NULL; caracole.getHitPoints() > 0; NULL)
		caracole.takeDamage(2);
	std::cout << std::endl;
		
	oroshi.setHitPoints(6);
	for (NULL; oroshi.getHitPoints() < 15; NULL)
		oroshi.beRepaired(2);
	return (0);
}
