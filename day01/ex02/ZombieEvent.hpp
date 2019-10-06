/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 19:16:37 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/01 20:28:58 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_H
# define ZOMBIE_EVENT_H

#include <iostream>
#include <string>
#include "Zombie.hpp"

class ZombieEvent
{
    
public:

    std::string name;
    std::string type;
    
    ZombieEvent(std::string name, std::string type);
    ~ZombieEvent(void);
    Zombie*     newZombie(std::string name); 
    void        setZombieType(std::string type);
    Zombie*     randomChump();
};

#endif