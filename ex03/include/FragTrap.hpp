/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 09:33:27 by jforner           #+#    #+#             */
/*   Updated: 2022/07/12 09:50:22 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FragTrap_H
# define FragTrap_H
# include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap{

private :

public:
    FragTrap(void);
    FragTrap(std::string name);
    ~FragTrap(void);
        
    FragTrap(const FragTrap &copy);

    FragTrap& operator=(FragTrap &copy);
    FragTrap& operator=(const FragTrap &copy);

    void	attack(const std::string& target);
    void    highFivesGuys(void);
};

#endif