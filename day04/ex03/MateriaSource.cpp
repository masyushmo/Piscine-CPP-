/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/05 12:24:21 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/05 14:24:24 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    this-> _invtry[0] = NULL;
    this->_invtry[0] = NULL;
    this->_invtry[0] = NULL;
    this->_invtry[0] = NULL;
    return;
}

MateriaSource::MateriaSource(const MateriaSource &cpy)
{
    for (int i = 0; i < 4; i++)
        if (this->_invtry[i] != NULL)
            delete this->_invtry[i];

    this->_invtry[0] = cpy._invtry[0];
    this->_invtry[1] = cpy._invtry[1];
    this->_invtry[2] = cpy._invtry[2];
    this->_invtry[3] = cpy._invtry[3];
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
        if (this->_invtry[i] != NULL)
            delete this->_invtry[i];
}

MateriaSource&	MateriaSource::operator = (const MateriaSource &src)
{
    for (int i = 0; i < 4; i++)
        if (this->_invtry[i] != NULL)
            delete this->_invtry[i];

    this->_invtry[0] = src._invtry[0];
    this->_invtry[1] = src._invtry[1];
    this->_invtry[2] = src._invtry[2];
    this->_invtry[3] = src._invtry[3];
    return *this;
}

void		MateriaSource::learnMateria(AMateria* m)
{
    for (int i = 0; i < 4; i++)
        if (this->_invtry[i] == NULL)
        {
            this->_invtry[i] = m;
            return;
        }
    return;
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
        if (this->_invtry[i]->getType() == type)
            return (this->_invtry[i]->clone());
    return 0;
}
