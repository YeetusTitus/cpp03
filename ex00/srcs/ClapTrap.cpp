/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 14:59:37 by jforner           #+#    #+#             */
/*   Updated: 2022/07/12 08:55:31 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>

//constructor & destructor
ClapTrap::ClapTrap(void)
{
	_Name = "Default";
	_Hit_points = 10;
	_Energy_points = 10;
	_Attack_damage = 0;
	std::cout << "claptrap created !"<< std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "claptrap created from a copy !" << std::endl;
	this->_Name = copy._Name;
	this->_Hit_points = copy._Hit_points;
	this->_Energy_points = copy._Energy_points;
	this->_Attack_damage = copy._Attack_damage;
}

ClapTrap::ClapTrap(std::string name)
{
	_Name = name;
	_Hit_points = 10;
	_Energy_points = 10;
	_Attack_damage = 0;
	std::cout << _Name << " claptrap created !"<< std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << this->_Name << " claptrap destroyed !"<< std::endl;
}


//overload

ClapTrap& ClapTrap::operator=(ClapTrap &copy)
{
	this->_Name = copy._Name;
	this->_Hit_points = copy._Hit_points;
	this->_Energy_points = copy._Energy_points;
	this->_Attack_damage = copy._Attack_damage;
	std::cout << "claptrap copied !" << std::endl;
	return *this;
}
ClapTrap& ClapTrap::operator=(const ClapTrap &copy)
{
	this->_Name = copy._Name;
	this->_Hit_points = copy._Hit_points;
	this->_Energy_points = copy._Energy_points;
	this->_Attack_damage = copy._Attack_damage;
	std::cout << "claptrap copied !" << std::endl;
	return *this;
}
//other
void	ClapTrap::attack(const std::string& target)
{
	if (this->_Hit_points <= 0)
		std::cout << this->_Name << " is dead !" << std::endl;
	else if (this->_Energy_points <= 0)
		std::cout << this->_Name << " has not enough energy !" << std::endl;
	if (this->_Energy_points > 0 && this->_Hit_points > 0)
	{
        std::cout << "ClapTrap " << this->_Name << " attacks " << target << ", causing "
            << this->_Attack_damage << " points of damage!" << std::endl;
		this->_Energy_points--;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_Hit_points <= 0)
		std::cout << this->_Name << " is already dead !" << std::endl;
	else
	{
        std::cout << "ClapTrap " << this->_Name << " take " << amount << " points of damage !" << std::endl;
		this->_Hit_points -= amount;
		if (this->_Hit_points < 0)
			this->_Hit_points = 0;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_Hit_points <= 0)
		std::cout << this->_Name << " is dead !" << std::endl;
	else if (this->_Energy_points <= 0)
		std::cout << this->_Name << " has not enough energy !" << std::endl;
	if (this->_Energy_points > 0 && this->_Hit_points > 0)
	{
        std::cout << "ClapTrap " << this->_Name << " repair " << amount << " points of damage!" << std::endl;
		this->_Hit_points += (unsigned)amount;
		this->_Energy_points--;
	}
}

//bonus
void ClapTrap::displayStat(void)
{
	std::cout << "Name : " << this->_Name << std::endl;
	std::cout << "Hp : " << this->_Hit_points << std::endl;
	std::cout << "Ep : " << this->_Energy_points << std::endl;
	std::cout << "Atk : " << this->_Attack_damage << std::endl;
}