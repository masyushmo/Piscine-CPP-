/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 16:01:10 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/02 17:02:50 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{

    Weapon &_weapon;
    std::string _name;
    
public:
    HumanA(std::string name, Weapon &weapon);
    ~HumanA();
    void attack();
};

#endif
