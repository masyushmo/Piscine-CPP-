/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 16:51:32 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/04 19:46:03 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
    std::cout << "Gaaah. Me want smash heads !" << std::endl;
    return;
}

SuperMutant::SuperMutant(const SuperMutant &cpy) : Enemy(cpy)
{
    std::cout << "Gaaah. Me want smash heads !" << std::endl;
    return;
}   

SuperMutant::~SuperMutant()
{
    std::cout << "Aaargh ..." << std::endl;
}

SuperMutant&	SuperMutant::operator = (const SuperMutant &src)
{
    Enemy::operator=(src);
    return *this;
}

void	SuperMutant::takeDamage(int dmg)
{
    if ((dmg - 3) < 0)
        return;
    if ((this->getHP() - (dmg - 3)) > 0)
        this->setHP(this->getHP() - (dmg - 3));
    else
         this->setHP(0);
    return;
}
