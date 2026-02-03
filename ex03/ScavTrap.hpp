/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoulin <fmoulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 14:36:19 by fmoulin           #+#    #+#             */
/*   Updated: 2026/02/03 11:30:15 by fmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
public:
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &copy);
	ScavTrap &operator =(const ScavTrap &src);
	~ScavTrap();
	
	void	attack(const std::string& target);
	void	guardGate();
};

#endif