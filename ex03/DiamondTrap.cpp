/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoulin <fmoulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 14:36:23 by fmoulin           #+#    #+#             */
/*   Updated: 2026/02/03 13:21:35 by fmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	_name = name;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 30;
	std::cout	<< "DiamondTrap "
				<< this->_name
				<< " has been created!"
				<< std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy) : ClapTrap(copy), ScavTrap(copy), FragTrap(copy)
{
	this->_name = copy._name;
	std::cout	<< "DiamondTrap "
				<< this->_name
				<< " has been mimicked!"
				<< std::endl;
}

DiamondTrap &DiamondTrap::operator =(const DiamondTrap &src)
{
	if (this != &src)
	{
		ClapTrap::operator =(src);
		this->_name = src._name;
	}
	return (*this);
}


DiamondTrap::~DiamondTrap()
{
	std::cout	<< "DiamondTrap "
				<< this->_name
				<< " exploded!"
				<< std::endl;
}

void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout	<< "My name is "
				<< this->_name
				<< std::endl;
	std::cout	<< "My ClapTrap name is "
				<< ClapTrap::_name
				<< std::endl;
}
