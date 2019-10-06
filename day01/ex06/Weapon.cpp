/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 16:00:46 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/02 16:49:22 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
    return;
}

Weapon::~Weapon(){}

const std::string & Weapon::getType(void) const
{
    return (this->_type);
}

void Weapon::setType(std::string type)
{
    this->_type = type;
}