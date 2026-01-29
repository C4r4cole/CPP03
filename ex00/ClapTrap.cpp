/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoulin <fmoulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 17:25:37 by fmoulin           #+#    #+#             */
/*   Updated: 2026/01/29 17:53:05 by fmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout	<< "ClapTrap "
				<< this->_name
				<< " is now operational!"
				<< std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	*this = copy;
	std::cout	<< "ClapTrap "
				<< this->_name
				<< " has been copied!"
				<< std::endl;
}

ClapTrap	&ClapTrap::operator =(const ClapTrap &src)
{
	if (this != &src)
	{
		this->_name = src._name;
		this->_hitPoints = src._hitPoints;
		this->_energyPoints = src._energyPoints;
		this->_attackDamage = src._attackDamage;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout	<< "ClapTrap "
				<< this->_name
				<< " has been destroyed!"
				<< std::endl;
}

std::string	ClapTrap::getName() const
{
	return (this->_name);
}

void	ClapTrap::setName(std::string name)
{
	this->_name = name;
}

unsigned int		ClapTrap::getHitPoints() const
{
	return (this->_hitPoints);
}

void	ClapTrap::setHitPoints(unsigned int amount)
{
	this->_hitPoints = amount;
	std::cout	<< "ClapTrap "
				<< this->getName()
				<< " hit points amount has been set to "
				<< amount
				<< std::endl; 
}

unsigned int		ClapTrap::getEnergyPoints() const
{
	return (this->_energyPoints);
}

void	ClapTrap::setEnergyPoints(unsigned int amount)
{
	this->_energyPoints = amount;
	std::cout	<< "ClapTrap "
				<< this->getName()
				<< " energy points amount has been set to "
				<< amount
				<< std::endl; 
}

unsigned int		ClapTrap::getAttackDamage() const
{
	return (this->_attackDamage);
}

void		ClapTrap::setAttackDamage(unsigned int amount)
{
	this->_attackDamage = amount;
	std::cout	<< "ClapTrap "
				<< this->getName()
				<< " attack damage's amount has been set to "
				<< amount
				<< std::endl; 
}

void		ClapTrap::attack(const std::string& target)
{
	if (this->_hitPoints < 1)
	{
		std::cout	<< "ClapTrap "
					<< this->_name
					<< " is dead!"
					<< std::endl;
		return ;
	}
	else if (this->_energyPoints < 1)
	{
		std::cout	<< "ClapTrap "
					<< this->_name
					<< " does not have enough energy in order to attack!"
					<< std::endl;
		return ;
	}
	else
	{
		this->_energyPoints -= 1;
		std::cout	<< "ClapTrap "
					<< this->_name
					<< " attacks "
					<< target
					<< ", causing "
					<< this->_attackDamage
					<< " points of damage!"
					<< std::endl;
		std::cout	<< "ClapTrap "
					<< this->_name
					<< " now have "
					<< this->_energyPoints
					<< " energy points' left!"
					<< std::endl;
	}
}

void		ClapTrap::takeDamage(unsigned int amount)
{
	if (amount >= this->_hitPoints)
	{
		this->_hitPoints = 0;
		std::cout	<< "ClapTrap "
				<< this->_name
				<< " is dead!"
				<< std::endl;
		return ;
	}
	else
	{
		this->_hitPoints -= amount;
		std::cout	<< "ClapTrap "
					<< this->_name
					<< " takes "
					<< amount
					<< " points of damage!"
					<< std::endl;
	}
	if(this->_hitPoints == 0)
	{
		std::cout	<< "ClapTrap "
					<< this->_name
					<< " is dead!"
					<< std::endl;
	}
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints < 1)
	{
		std::cout	<< "ClapTrap "
					<< this->_name
					<< " is dead!"
					<< std::endl;
		return ;
	}
	else if (this->_energyPoints < 1)
	{
		std::cout	<< "ClapTrap "
		<< this->_name
		<< " does not have enough energy in order to repair!"
		<< std::endl;
		return ;
	}
	else
	{
		this->_energyPoints -= 1;
		this->_hitPoints += amount;
		std::cout	<< "ClapTrap "
					<< this->_name
					<< " repaired themself. They have now "
					<< this->getHitPoints()
					<< " points of health!"
					<< std::endl;
		std::cout	<< "ClapTrap "
					<< this->_name
					<< " now have "
					<< this->_energyPoints
					<< " energy points' left!"
					<< std::endl;
	}
}
