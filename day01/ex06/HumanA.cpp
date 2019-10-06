/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 16:01:00 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/02 17:02:47 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon), _name(name) 
{
    return;
}

HumanA::~HumanA(){}

void HumanA::attack()
{
    std::cout << this->_name << "attacks with his" << this->_weapon.getType() << std::endl;
}
