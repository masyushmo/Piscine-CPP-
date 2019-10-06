/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 09:34:14 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/02 10:23:09 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HORDE_H
# define ZOMBIE_HORDE_H

#include <iostream>
#include <string>
#include "Zombie.hpp"

class ZombieHorde
{

    std::string name;
    std::string type;
    
public:
    
    ZombieHorde(int N);
    ~ZombieHorde();
    std::string randomChump();
};

#endif