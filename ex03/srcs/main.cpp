/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 18:24:28 by jforner           #+#    #+#             */
/*   Updated: 2022/07/12 10:18:59 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <DiamondTrap.hpp>

int main() 
{
	DiamondTrap	vampire;
	DiamondTrap	killer(vampire);
	ClapTrap	gentleman("Jonathan");
	DiamondTrap	student("Josuke");

	vampire.displayStat();
	killer.displayStat();
	gentleman.displayStat();
	student.displayStat();

	gentleman.attack("Dio");
	gentleman.displayStat();

	student.attack("Kira");
	student.displayStat();

	gentleman.takeDamage(1);
	gentleman.displayStat();

	student.takeDamage(3);
	student.displayStat();
	
	student.beRepaired(1);
	student.displayStat();

	student.highFivesGuys();
	student.guardGate();
	student.whoAmI();
	std::cout << "Crazy Noisy Bizzare Town !\n";
	// system("leaks frag");
	return 0;
}