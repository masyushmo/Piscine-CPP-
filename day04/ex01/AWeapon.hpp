/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 16:50:22 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/05 20:58:12 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_H
# define AWEAPON_H

#include <string>
#include <iostream>

class AWeapon
{

private:

    std::string _name;
    int _ap;
    int _dmg;

public:

    AWeapon();
    AWeapon(std::string const & name, int apcost, int damage);
    AWeapon(const AWeapon &cpy);
    virtual ~AWeapon();

    AWeapon&	operator = (const AWeapon &src);

    std::string const & getName() const;
    int getAPCost() const;
    int getDamage() const;
    
    virtual void shoot() const = 0;
};

#endif