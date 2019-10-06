/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 16:50:55 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/04 20:14:50 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(void) : AWeapon("Power Fist", 8, 50)
{
    return;
}

PowerFist::PowerFist(const PowerFist &cpy) : AWeapon(cpy)
{
    return;
}

PowerFist::~PowerFist(void) { }

PowerFist&	PowerFist::operator = (const PowerFist &src)
{
   AWeapon::operator=(src);
   return *this;
}

void	PowerFist::attack(void) const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
