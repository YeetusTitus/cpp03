/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 09:33:27 by jforner           #+#    #+#             */
/*   Updated: 2022/07/13 08:42:29 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <DiamondTrap.hpp>

//constructor & destructor
DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{
	this->_Name = name;
	this->_Hit_points = FragTrap::_Hit_points;
	this->_Energy_points =  ScavTrap::_Energy_points;
	this->_Attack_damage =  FragTrap::_Attack_damage;
	std::cout << _Name << " diamond created !" << std::endl;
}

DiamondTrap::DiamondTrap(void) : ClapTrap("default_clap_name")
{
	this->_Name = "default";
	this->_Hit_points = FragTrap::_Hit_points;
	this->_Energy_points =  ScavTrap::_Energy_points;
	this->_Attack_damage =  FragTrap::_Attack_damage;
	std::cout << "diamond created !"<< std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy) : ClapTrap(copy)
{
	this->_Name = copy._Name;
	std::cout << "diamond created from a copy !"<< std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << this->_Name << " diamond destroyed !"<< std::endl;
}

//other
void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap name " << this->_Name << std::endl;
	std::cout << "ClapTrap name " << ClapTrap::_Name << std::endl;
}

//bonus
void	DiamondTrap::displayStat(void)
{
	std::cout << "Name : " << this->_Name << std::endl;
	std::cout << "Hp : " << this->_Hit_points << std::endl;
	std::cout << "Ep : " << this->_Energy_points << std::endl;
	std::cout << "Atk : " << this->_Attack_damage << std::endl;
}