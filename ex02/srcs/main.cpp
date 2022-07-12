/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 18:24:28 by jforner           #+#    #+#             */
/*   Updated: 2022/07/12 08:59:59 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>
#include <FragTrap.hpp>
#include <ScavTrap.hpp>

int main() 
{
	FragTrap	roblox;
	FragTrap	fortnite(roblox);
	ScavTrap	police("Soldier 76");
	FragTrap	terrorist("Omen");

	roblox.displayStat();
	fortnite.displayStat();
	police.displayStat();
	terrorist.displayStat();

	police.attack("Vivian");
	police.displayStat();

	terrorist.attack("Revenant");
	terrorist.displayStat();

	police.takeDamage(1);
	police.displayStat();

	terrorist.takeDamage(3);
	terrorist.displayStat();
	
	terrorist.beRepaired(1);
	terrorist.displayStat();

	terrorist.highFivesGuys();
	std::cout << "Terrorist win !\n";
	// system("leaks frag");
	return 0;
}