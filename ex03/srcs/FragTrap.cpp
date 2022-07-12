/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 09:33:27 by jforner           #+#    #+#             */
/*   Updated: 2022/07/12 10:44:10 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <FragTrap.hpp>

//constructor & destructor
FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_Name = name;
	this->_Hit_points = 100;
	if (this->_Energy_points == 10)
		this->_Energy_points = 100;
	this->_Attack_damage = 30;
	std::cout << _Name << " fragtrap created !"<< std::endl;
}

FragTrap::FragTrap(void) : ClapTrap()
{
	this->_Hit_points = 100;
	if (this->_Energy_points == 10)
		this->_Energy_points = 100;
	this->_Attack_damage = 30;
	std::cout << "fragtrap created !"<< std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
	std::cout << "fragtrap created from a copy !"<< std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << this->_Name << " fragtrap destroyed !"<< std::endl;
}

//other
void	FragTrap::attack(const std::string& target)
{
	if (this->_Hit_points <= 0)
		std::cout << this->_Name << " is dead !" << std::endl;
	else if (this->_Energy_points <= 0)
		std::cout << this->_Name << " has not enough energy !" << std::endl;
	if (this->_Energy_points > 0 && this->_Hit_points > 0)
	{
        std::cout << "Fragtrap " << this->_Name << " attacks " << target << ", causing "
            << this->_Attack_damage << " points of damage!" << std::endl;
		this->_Energy_points--;
	}
}

void FragTrap::highFivesGuys(void)
{
	std::cout << this->_Name << " want a high five !" << std::endl;
}