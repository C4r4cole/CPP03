/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoulin <fmoulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 14:36:23 by fmoulin           #+#    #+#             */
/*   Updated: 2026/01/30 19:40:13 by fmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout	<< "ScavTrap "
				<< this->_name
				<< " has been created!"
				<< std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
	std::cout	<< "ScavTrap "
				<< this->_name
				<< " has been mimicked!"
				<< std::endl;
}

ScavTrap &ScavTrap::operator =(const ScavTrap &src)
{
	if (this != &src)
	{
		ClapTrap::operator =(src);
	}
	return (*this);
}


ScavTrap::~ScavTrap()
{
	std::cout	<< "ScavTrap "
			<< this->_name
			<< " exploded!"
			<< std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
		if (this->_hitPoints < 1)
	{
		std::cout	<< "ScavTrap "
					<< this->_name
					<< " is dead!"
					<< std::endl;
		return ;
	}
	else if (this->_energyPoints < 1)
	{
		std::cout	<< "ScavTrap "
					<< this->_name
					<< " has low battery!"
					<< std::endl;
		return ;
	}
	else
	{
		this->_energyPoints -= 1;
		std::cout	<< "ScavTrap "
					<< this->_name
					<< " crush "
					<< target
					<< ", causing "
					<< this->_attackDamage
					<< " points of damage!"
					<< std::endl;
		std::cout	<< "ScavTrap "
					<< this->_name
					<< " now have "
					<< this->_energyPoints
					<< " energy points' left!"
					<< std::endl;
	}
}

void	ScavTrap::guardGate()
{
	std::cout	<< "ScavTrap "
				<< this->_name
				<< " is now in Gate keeper mode."
				<< std::endl;
}
