/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 18:24:28 by jforner           #+#    #+#             */
/*   Updated: 2022/07/12 07:26:05 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>

int main() 
{
	ClapTrap im("Red");
	ClapTrap cm("Yellow");
	ClapTrap crewmate(cm);
	ClapTrap impostor;

	impostor.displayStat();

	impostor = im;
	im.displayStat();
	cm.displayStat();
	impostor.displayStat();
	crewmate.displayStat();

	//attack
	impostor.attack("Yellow");
	impostor.displayStat();

	//take non lethal damage
	crewmate.takeDamage(1);
	crewmate.displayStat();


	//repair the damages
	crewmate.beRepaired(1);
	crewmate.displayStat();


	//nom more energy points
	for (int i = 0;i < 9; i++)
		impostor.attack("Yellow");
	impostor.displayStat();

	//trying attacking another time
	impostor.attack("Yellow");

	//take lethal damage
	crewmate.takeDamage(10);
	crewmate.displayStat();
	
	//trying to repair form lethal damage
	crewmate.beRepaired(2);
	crewmate.displayStat();

	std::cout << "Red was the impostor !\n";
	// system("leaks clap");
	return 0;
}