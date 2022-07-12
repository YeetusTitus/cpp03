/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 09:33:27 by jforner           #+#    #+#             */
/*   Updated: 2022/07/12 08:49:58 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ScavTrap.hpp>

//constructor & destructor
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_Hit_points = 100;
	this->_Energy_points = 50;
	this->_Attack_damage = 20;
	std::cout << _Name << " scavtrap created !"<< std::endl;
}


ScavTrap::ScavTrap(void) : ClapTrap()
{
	this->_Hit_points = 100;
	this->_Energy_points = 50;
	this->_Attack_damage = 20;
	std::cout << "scavtrap created !"<< std::endl;
}


ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
	std::cout << "scavtrap created from a copy !"<< std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << this->_Name << " scavtrap destroyed !"<< std::endl;
}

//operator overload
ScavTrap& ScavTrap::operator=(ScavTrap &copy)
{
	this->_Name = copy._Name;
	this->_Hit_points = copy._Hit_points;
	this->_Energy_points = copy._Energy_points;
	this->_Attack_damage = copy._Attack_damage;
	return *this;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &copy)
{
	this->_Name = copy._Name;
	this->_Hit_points = copy._Hit_points;
	this->_Energy_points = copy._Energy_points;
	this->_Attack_damage = copy._Attack_damage;
	return *this;
}

//other
void	ScavTrap::attack(const std::string& target)
{
	if (this->_Hit_points <= 0)
		std::cout << this->_Name << " is dead !" << std::endl;
	else if (this->_Energy_points <= 0)
		std::cout << this->_Name << " has not enough energy !" << std::endl;
	if (this->_Energy_points > 0 && this->_Hit_points > 0)
	{
        std::cout << "ScavTrap " << this->_Name << " attacks " << target << ", causing "
            << this->_Attack_damage << " points of damage!" << std::endl;
		this->_Energy_points--;
	}
}

void ScavTrap::guardGate(void)
{
	std::cout << this->_Name << " gatekeeper mode activated !" << std::endl;
}