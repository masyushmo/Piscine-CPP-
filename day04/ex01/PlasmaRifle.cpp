/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 16:50:34 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/04 20:15:16 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) : AWeapon("Plasma Rifle", 5, 21)
{
    return;
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &cpy) : AWeapon(cpy)
{
    return;
}

PlasmaRifle::~PlasmaRifle(void) { }

PlasmaRifle&	PlasmaRifle::operator = (const PlasmaRifle &src)
{
   AWeapon::operator=(src);
   return *this;
}

void	PlasmaRifle::attack(void) const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

