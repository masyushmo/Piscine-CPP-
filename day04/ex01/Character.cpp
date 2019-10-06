/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 16:52:10 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/05 17:39:21 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {}

Character::Character(std::string const & name) : _name(name), _ap(40), _weapon(NULL)
{ 
    return;
}

Character::Character(const Character &cpy)
{ 
    *this = cpy;
    return;
}

Character::~Character(void) { }

Character&	Character::operator = (const Character &src)
{
	this->_name = src.getName();
	this->_ap = src.getAp();
	this->_weapon = src.getWeapon();
	return (*this);
}

std::string const &	Character::getName(void) const	{ return this->_name; }
int	Character::getAp(void) const { return  this->_ap; }
AWeapon* Character::getWeapon(void)	const { return  this->_weapon; }

void	Character::recoverAP(void) 
{ 
    if (this->_ap + 10 < 40)
        this->_ap += 10;
    else
        this->_ap = 40;
    return;
}
void	Character::equip(AWeapon *weapon)
{
   this-> _weapon = weapon;
    return;
}

void	Character::attack(Enemy *enemy)
{
	if (this->_ap >= this->_weapon->getAPCost() && this->_weapon && enemy->getHP() != 0)
	{
		std::cout << this->_name << " attacks " << enemy->getType() << " with a " << this->_weapon->getName() << std::endl;
		this->_ap -= this->_weapon->getAPCost();
		this->_weapon->attack();
		enemy->takeDamage(this->_weapon->getDamage());
		if (enemy->getHP() == 0)
			delete enemy;
	}
}

std::ostream &operator << (std::ostream &of, Character const &src)
{
	if (src.getWeapon())
		of << src.getName() << " has "<< src.getAp() << " AP and wields a " << src.getWeapon()->getName() << std::endl;
	else
		of << src.getName() << " has " << src.getAp() << " AP and is unarmed" << std::endl;
	return of;
}