/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AFly.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 04:13:54 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/06 09:42:17 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstddef>
#include "../includes/AFly.hpp"
#include "../includes/Objects.hpp"

AFly::AFly(void) : _size(4096), _n(0), _last(0)
{
	this->_squad = new Objects *[this->_size];
	
	for (int i = 0; i < this->_size; i++)
		this->_squad[i] = NULL;
}

AFly::AFly(AFly const & cpy)
{
	*this = cpy;
}

AFly::~AFly()
{
	delete [] this->_squad;
}

AFly& AFly::operator=(AFly const & src)
{
    this->_size = src.getSize();
    this->_n = src.getCount();
   	this-> _last = src.getLast();
	return *this;
}

Objects **AFly::getArray(void) const
{
	return this->_squad;
}

int AFly::getCount(void) const
{
	return this->_n;
}
int AFly::getSize(void) const
{
	return this->_size;
}

int AFly::getLast(void) const
{
	return this->_last + 1;
}

void AFly::add(Objects *obj)
{
	for(int i = 0; i < this->_size; i++)
	{
		if (this->_squad[i] == NULL)
		{
			this->_squad[i] = obj;

			this->_n++;

			if (this->_last <= i)
				this->_last = i;

			return ;
		}
	}
}

void AFly::remove(int i)
{
	if (this->_squad[i] == NULL)
		return;
	this->_squad[i] = NULL;
	if (this->_last == i)
	{
		for (int i = this->_last; i >= 0; i--)
		{
			if (this->_squad[i] != NULL)
			{
				this->_last = i;
				return;
			}
		}
	}
}