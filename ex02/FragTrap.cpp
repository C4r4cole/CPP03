/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoulin <fmoulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 14:36:23 by fmoulin           #+#    #+#             */
/*   Updated: 2026/02/02 17:56:45 by fmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout	<< "FragTrap "
				<< this->_name
				<< " has been created!"
				<< std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
	std::cout	<< "FragTrap "
				<< this->_name
				<< " has been mimicked!"
				<< std::endl;
}

FragTrap &FragTrap::operator =(const FragTrap &src)
{
	if (this != &src)
	{
		ClapTrap::operator =(src);
	}
	return (*this);
}


FragTrap::~FragTrap()
{
	std::cout	<< "FragTrap "
			<< this->_name
			<< " exploded!"
			<< std::endl;
}

void	FragTrap::attack(const std::string& target)
{
		if (this->_hitPoints < 1)
	{
		std::cout	<< "FragTrap "
					<< this->_name
					<< " is dead!"
					<< std::endl;
		return ;
	}
	else if (this->_energyPoints < 1)
	{
		std::cout	<< "FragTrap "
					<< this->_name
					<< " has low battery!"
					<< std::endl;
		return ;
	}
	else
	{
		this->_energyPoints -= 1;
		std::cout	<< "FragTrap "
					<< this->_name
					<< " crush "
					<< target
					<< ", causing "
					<< this->_attackDamage
					<< " points of damage!"
					<< std::endl;
		std::cout	<< "FragTrap "
					<< this->_name
					<< " now have "
					<< this->_energyPoints
					<< " energy points' left!"
					<< std::endl;
	}
}

void	FragTrap::highFivesGuys()
{
	std::cout	<< "FragTrap "
				<< this->_name
				<< " is so happy and wants to give you a high five!"
				<< std::endl;
}
