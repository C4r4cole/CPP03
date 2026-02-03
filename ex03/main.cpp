/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoulin <fmoulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 17:25:30 by fmoulin           #+#    #+#             */
/*   Updated: 2026/02/03 13:41:04 by fmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "FragTrap.hpp"
// #include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	ClapTrap	golgoth("Golgoth");
	ClapTrap	pietro(golgoth);
	ClapTrap	caracole("Caracole");
	ClapTrap	oroshi("Oroshi");
	ClapTrap	dubkaH("Horst");
	ClapTrap	dubkaK("Karst");
	ScavTrap	sov("Sov");
	FragTrap	arval("Arval");
	DiamondTrap	alme("Alme");
	DiamondTrap aoi("Aoi");
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
	
	arval.attack("Talweg");
	std::cout << std::endl;

	arval.highFivesGuys();
	std::cout << std::endl;
	
	for (NULL; caracole.getHitPoints() > 0; NULL)
		caracole.takeDamage(2);
	std::cout << std::endl;
		
	oroshi.setHitPoints(6);
	for (NULL; oroshi.getHitPoints() < 15; NULL)
		oroshi.beRepaired(2);
	std::cout << std::endl;
	
	alme = aoi;
	alme.attack("Talweg");
	alme.takeDamage(1);
	alme.whoAmI();
	return (0);
}
