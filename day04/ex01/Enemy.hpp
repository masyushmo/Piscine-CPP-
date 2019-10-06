/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 16:51:18 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/04 19:40:59 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_H
# define ENEMY_H

#include <string>
#include <iostream>

class Enemy
{

private:

    int _hp;
    std::string _type;
    
public:
    
    Enemy();
    Enemy(int hp, std::string const & type);
    Enemy(const Enemy &cpy);
    virtual ~Enemy();

    Enemy&	operator = (const Enemy &src);

    std::string  getType() const;
    int getHP() const;
    void setHP(int i);
    
    virtual void takeDamage(int);
};

#endif