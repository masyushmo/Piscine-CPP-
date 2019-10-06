/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 19:16:49 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/02 13:53:04 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

ZombieEvent::ZombieEvent(std::string name, std::string type) : name(name), type(type)
{
    return;   
}

ZombieEvent::~ZombieEvent()
{
    std::cout << this->name << " is dead... I mean.. it's was dead, but now it's DEAD!!!" << std::endl;
    return;
}

void        ZombieEvent::setZombieType(std::string type)
{
    this->type = type;
    std::cout << this->name << " has evolved to type of: " << this->type << std::endl;
    return;
}

Zombie*     ZombieEvent::newZombie(std::string name)
{
    Zombie *temp = new Zombie(name, this->type);
    return(temp);
}

Zombie*     ZombieEvent::randomChump()
{
    srand(time(NULL));
    std::string name = "Z";
    int i = (rand() % 10);
 
    switch(i)
    {
        case 0:
            name.append("az");
            break;
        case 1:
            name.append("george");
            break;
        case 2:
            name.append("fir");
            break;
        case 3:
            name.append("max");
            break;
        case 4:
            name.append("daniel");
            break;
        case 5:
            name.append("yulia");
            break;
        case 6:
            name.append("nastya");
            break;
        case 7:
            name.append("izitop");
            break;
        case 8:
            name.append("linkoln");
            break;
        case 9:
            name.append("petya");
            break;
        default:
            name.append("Z");
    }
    return(newZombie(name));
}