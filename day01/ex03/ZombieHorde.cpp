/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 09:34:10 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/02 14:05:25 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Zombie.hpp"
#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N) : type("of Horde of the Phoenix ")
{
    Zombie *Horde = new Zombie[N];

    for (int i = 0; i < N; i++)
    {
        Horde[i].type = type;
        Horde[i].name = randomChump();
        Horde[i].announce();
    }
    delete [] Horde;
    return;
}

ZombieHorde::~ZombieHorde()
{
    std::cout << "Horde is dead... I mean.. they were dead, but now they are DEAD!!!" << std::endl;
    return;
}

std::string     ZombieHorde::randomChump()
{
    std::string name = "Z";
    int i = (rand() % 10);
 
    switch(i)
    {
        case 0:
            name.append("kawasaki");
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
    return(name);
}
