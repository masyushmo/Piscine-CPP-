/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 16:50:17 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/04 20:17:51 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(){}

AWeapon::AWeapon(std::string const & name, int apcost, int damage) :
    _name(name), _ap(apcost), _dmg(damage)
{
    return;
}

AWeapon::AWeapon(const AWeapon &cpy)
{
    *this = cpy;
}   

AWeapon::~AWeapon() {}

AWeapon&	AWeapon::operator = (const AWeapon &src)
{
    this->_name = src.getName();
    this->_ap = src.getAPCost();
    this->_dmg = src.getDamage();
    return *this;
}

std::string const & AWeapon::getName() const { return this->_name; }
int AWeapon::getAPCost() const { return this->_ap; }
int AWeapon::getDamage() const { return this->_dmg; }
