/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 09:33:46 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/02 10:33:19 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie::Zombie(std::string name, std::string type) : name(name), type(type)
{
    announce();
    return;   
}

Zombie::Zombie()
{
    return;   
}

Zombie::~Zombie()
{
    std::cout << this->name << " is dead... I mean.. it's was dead, but now it's DEAD!!!" << std::endl;
    return;
}

void Zombie::announce()
{
    std::cout << this->name << " (" << this->type << ") :" << " Braiiiiiiinnnssss..." << std::endl;
    return;
}