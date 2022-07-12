/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 09:33:27 by jforner           #+#    #+#             */
/*   Updated: 2022/07/12 09:50:12 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H
# include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap{

public:
    ScavTrap(void);
    ScavTrap(std::string name);
    ~ScavTrap(void);
        
    ScavTrap(const ScavTrap &copy);

    ScavTrap& operator=(ScavTrap &copy);
    ScavTrap& operator=(const ScavTrap &copy);

    void	attack(const std::string& target);
    void	guardGate(void);
};

#endif