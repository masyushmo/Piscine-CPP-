/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 16:00:51 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/02 17:03:08 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>
#include <string>

class Weapon
{
    std::string _type;

public:
    Weapon(std::string type);
    ~Weapon();
    const std::string & getType(void) const;
    void setType(std::string);
};

#endif
