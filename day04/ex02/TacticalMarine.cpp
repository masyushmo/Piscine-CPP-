/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 20:18:51 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/04 20:43:46 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(void)
{
    std::cout << "Tactical Marine ready for battle" << std::endl;
    return;
}

TacticalMarine::TacticalMarine(const TacticalMarine &cpy)
{
    *this = cpy;
    std::cout << "Tactical Marine ready for battle" << std::endl;
    return;
}

TacticalMarine::~TacticalMarine(void)
{
    std::cout << "Aaargh ..." << std::endl;
    return;
}

TacticalMarine & TacticalMarine::operator = (const TacticalMarine &src)
{
    (void) src;
    return *this;
}

ISpaceMarine*	TacticalMarine::clone(void)			const
{
    return(new TacticalMarine(*this));
}

void			TacticalMarine::battleCry(void)		const
{
    std::cout << "For the holy PLOT !" << std::endl;
}

void			TacticalMarine::rangedAttack(void)	const
{
    std::cout << "* attacks with bolter *" << std::endl;
}
void			TacticalMarine::meleeAttack(void)	const
{
    std::cout << "* attacks with chainsword *" << std::endl;
}