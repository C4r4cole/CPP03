/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoulin <fmoulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 17:25:33 by fmoulin           #+#    #+#             */
/*   Updated: 2026/01/29 17:52:34 by fmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>
# include <cstdlib>
# include <cmath>

class ClapTrap
{
private:
	std::string		_name;
	unsigned int	_hitPoints;
	unsigned int	_energyPoints;
	unsigned int	_attackDamage;
public:
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &copy);
	ClapTrap &operator =(const ClapTrap &src);
	~ClapTrap();

	std::string		getName() const;
	void			setName(std::string name);
	
	unsigned int	getHitPoints() const;
	void			setHitPoints(unsigned int amount);
	
	unsigned int	getEnergyPoints() const;
	void			setEnergyPoints(unsigned int amount);
	
	unsigned int	getAttackDamage() const;
	void			setAttackDamage(unsigned int amount);

	void			attack(const std::string& target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);
};

#endif