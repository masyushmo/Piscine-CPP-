/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 19:15:27 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/02 13:40:39 by mmasyush         ###   ########.fr       */
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