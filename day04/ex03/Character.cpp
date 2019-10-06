/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/05 12:24:08 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/05 23:30:02 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {}

Character::Character(std::string const &name) : _name(name)
{
    this-> _invtry[0] = NULL;
    this->_invtry[0] = NULL;
    this->_invtry[0] = NULL;
    this->_invtry[0] = NULL;
    return;
}

Character::Character(const Character &cpy)
{
    for (int i = 0; i < 4; i++)
        if (this->_invtry[i] != NULL)
            delete this->_invtry[i];

    this->_name = cpy.getName();
    this->_invtry[0] = cpy._invtry[0];
    this->_invtry[1] = cpy._invtry[1];
    this->_invtry[2] = cpy._invtry[2];
    this->_invtry[3] = cpy._invtry[3];
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
        if (this->_invtry[i] != NULL)
            delete this->_invtry[i];
}

Character&	Character::operator = (const Character &src)
{
    for (int i = 0; i < 4; i++)
        if (this->_invtry[i] != NULL)
            delete this->_invtry[i];

    this->_name = src.getName();
    this->_invtry[0] = src._invtry[0];
    this->_invtry[1] = src._invtry[1];
    this->_invtry[2] = src._invtry[2];
    this->_invtry[3] = src._invtry[3];
    return *this;
}

std::string const &	Character::getName(void) const { return this->_name; }

void    Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
        if (this->_invtry[i] == NULL)
        {
            this->_invtry[i] = m;
            return;
        }
    return;
}

void    Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4 && this->_invtry[idx] != NULL)
        this->_invtry[idx] = NULL;
}

void    Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx < 4 && this->_invtry[idx] != NULL)
        this->_invtry[idx]->use(target);
}
