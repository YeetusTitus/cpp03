/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 18:24:28 by jforner           #+#    #+#             */
/*   Updated: 2022/07/12 07:59:52 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>
#include <ScavTrap.hpp>

int main() 
{
	ScavTrap	bandit;
	ScavTrap	dk(bandit);
	ScavTrap	gatekeeper("Gatekeeper");
	ClapTrap	professor("Byleth");

	gatekeeper.displayStat();
	professor.displayStat();

	gatekeeper.attack("Bandit");
	gatekeeper.displayStat();

	professor.attack("Death knight");
	professor.displayStat();

	gatekeeper.takeDamage(1);
	gatekeeper.displayStat();

	professor.takeDamage(3);
	professor.displayStat();
	
	gatekeeper.beRepaired(1);
	gatekeeper.displayStat();

	gatekeeper.guardGate();
	std::cout << "Greeting professor, nothing to report !\n";
	// system("leaks scav");
	return 0;
}