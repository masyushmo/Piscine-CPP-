/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 16:51:14 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/04 19:41:03 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy() {}

Enemy::Enemy(int hp, std::string const & type) : _hp(hp), _type(type) 
{
    return;
}

Enemy::Enemy(const Enemy &cpy)
{
    *this = cpy;
}   

Enemy::~Enemy() {}

Enemy&	Enemy::operator = (const Enemy &src)
{
    this->_type = src.getType();
    this->_hp = src.getHP();
    return *this;
}

std::string Enemy::getType() const { return this->_type; }
int Enemy::getHP() const { return this->_hp;}
void Enemy::setHP(int i)
{
    this->_hp = i;
    return;
}

void	Enemy::takeDamage(int dmg)
{
    if (this->_hp - dmg < 0)
        this->_hp = 0;
    else
        this->_hp -= dmg;
}
