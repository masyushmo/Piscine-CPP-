/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 20:19:04 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/04 20:46:06 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void)
{
    std::cout << "* teleports from space *" << std::endl;
    return;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &cpy)
{
    *this = cpy;
    std::cout << "* teleports from space *" << std::endl;
    return;
}

AssaultTerminator::~AssaultTerminator(void)
{
    std::cout << "I’ll be back ..." << std::endl;
    return;
}

AssaultTerminator & AssaultTerminator::operator = (const AssaultTerminator &src)
{
    (void) src;
    return *this;
}

ISpaceMarine*	AssaultTerminator::clone(void)			const
{
    return(new AssaultTerminator(*this));
}

void			AssaultTerminator::battleCry(void)		const
{
    std::cout << "This code is unclean. PURIFY IT !" << std::endl;
}

void			AssaultTerminator::rangedAttack(void)	const
{
    std::cout << "* does nothing *" << std::endl;
}
void			AssaultTerminator::meleeAttack(void)	const
{
    std::cout << "* attacks with chainfists *" << std::endl;
}