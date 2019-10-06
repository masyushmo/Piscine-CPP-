/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/05 12:23:53 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/06 02:22:58 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "AMateria.hpp"

Cure::Cure() : AMateria("cure") {}
Cure::Cure(const Cure &cpy) : AMateria(cpy) {}

Cure::~Cure() {}

Cure&	Cure::operator = (const Cure &src)
{
    this->setXp(src.getXP());
    return *this;
}

AMateria*   Cure::clone(void) const
{
    AMateria* newbie = new Cure();
    return newbie;
}

void	Cure::use(ICharacter & target)
{
    std::cout << "* heals " << target.getName() << " wounds *" << std::endl;
}
