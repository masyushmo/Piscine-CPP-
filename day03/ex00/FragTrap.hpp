/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 12:12:27 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/04 13:53:43 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_H
# define FRAG_TRAP_H

#include <iostream>
#include <string>

class FragTrap
{

private:

    std::string _name;

    int _hp;
    //int _max_dmg;
    int _energy;
    //int _energyMAX;
    int _lvl;
    int _melleDMG;
    int _rangeDMG;
    int _armor;

public:

    FragTrap();
    FragTrap(std::string const name);
    FragTrap(FragTrap const & src);
    ~FragTrap();

    FragTrap & operator=(FragTrap const & rhs);

    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void vaulthunter_dot_exe(std::string const & target);

    std::string	getName(void) const;
	int			getHp(void) const;
	int			getEnery(void) const;
	int			getLvl(void) const;
};

#endif