/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 14:08:44 by jforner           #+#    #+#             */
/*   Updated: 2022/07/12 10:26:30 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H
# include <string>
# include <iostream>
# include <cstring>
# include <fstream>
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {

private :

    std::string	_Name;

public:
    DiamondTrap(void);
    DiamondTrap(std::string	name);
    ~DiamondTrap(void);
        
    DiamondTrap(const DiamondTrap &copy);

    DiamondTrap& operator=(DiamondTrap &copy);
    DiamondTrap& operator=(const DiamondTrap &copy);
	

	void	attack(const std::string& target);

	void	whoAmI(void);

	void	displayStat(void);
};

#endif