/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/05 12:23:30 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/05 15:22:24 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "AMateria.hpp"

Ice::Ice() : AMateria("ice") {}
Ice::Ice(const Ice &cpy) : AMateria(cpy) {}

Ice::~Ice() {}

Ice&	Ice::operator = (const Ice &src)
{
    this->setXp(src.getXP());
    return *this;
}

AMateria*   Ice::clone(void) const
{
    AMateria* newbie = new Ice();
    return newbie;
}

void	Ice::use(ICharacter & target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
