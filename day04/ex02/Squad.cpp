/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 20:18:36 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/05 11:37:07 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Squad.hpp"

Squad::Squad(void) : _count(0), _marines(NULL)
{
    return;
}

Squad::Squad(const Squad & cpy)
{
    int i = 0;
    t_marines	*temp;
	
    while (this->_marines)
	{
		temp = this->_marines->next;
        delete this->_marines->marine;
        this->_marines = temp;
	}
    delete this->_marines;
    while (i < cpy.getCount())
    {
        push(cpy.getUnit(i));
        i++;
    }
    this->_count = cpy.getCount();
    return ;
}

Squad & Squad::operator=(Squad const & src)
{
    int i = 0;
    t_marines	*temp;
	
    while (this->_marines)
	{
		temp = this->_marines->next;
        delete this->_marines->marine;
        this->_marines = temp;
	}
    delete this->_marines;
    while (i < src.getCount())
    {
        push(src.getUnit(i));
        i++;
    }
    this->_count = src.getCount();
    return *this;
}

Squad::~Squad(void)
{	
    t_marines *temp;
    while (this->_marines)
	{
		temp = this->_marines->next;
        delete this->_marines->marine;
        this->_marines = temp;
	}
    delete this->_marines;
    return;
}

int Squad::getCount() const { return _count; }

ISpaceMarine* Squad::getUnit(int n) const
{
    if (n >= this->_count || n < 0)
        return (NULL);

    t_marines	*temp = _marines;
    int i = 0;

    while (i < n)
    {
        if (temp)
			temp = temp->next;
		else
			return (NULL);
        i++;
    }
	return (temp->marine);
}

int Squad::push(ISpaceMarine* newbie)
{
	if (newbie == NULL)
		return (_count);
    
    if (this->_count == 0)
    {
        this->_marines = new t_marines;
		this->_marines->marine = newbie;
		this->_marines->next = NULL;
        this->_count++;
        return(this->_count);
    }

    t_marines	*temp;

    temp = this->_marines;
    int i = 0;
	while (i < this->getCount())
	{
		if (this->_marines->marine == newbie)
			return (this->_count);
        if (this->_marines->next == NULL)
            this->_marines->next = new t_marines;
		this->_marines = this->_marines->next;
        i++;
	}
	this->_marines->marine = newbie;
	this->_marines->next = NULL;
    this->_marines = temp;
	this->_count++;
	return (this->_count);
}
