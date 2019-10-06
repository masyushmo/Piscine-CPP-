/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 09:33:53 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/02 11:45:46 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <string>

class Zombie
{
    
public:

    std::string name;
    std::string type;
    
    Zombie();
    Zombie(std::string name, std::string type);
    ~Zombie(void);
    void    announce(void);
};

#endif