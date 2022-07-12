/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 18:15:39 by jforner           #+#    #+#             */
/*   Updated: 2022/07/12 07:33:52 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H
# include <string>
# include <iostream>
# include <cstring>
# include <fstream>

class ClapTrap{

protected :
	std::string		_Name;
	int				_Hit_points;
	int				_Energy_points;
	int				_Attack_damage;

public:
	ClapTrap(void);
	~ClapTrap(void);

	ClapTrap(std::string name);
    ClapTrap(const ClapTrap &copy);

    ClapTrap& operator=(ClapTrap &copy);
    ClapTrap& operator=(const ClapTrap &copy);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	void displayStat(void);
};

#endif