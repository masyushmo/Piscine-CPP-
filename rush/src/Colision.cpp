/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Objects.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 04:16:28 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/06 08:21:27 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Game.hpp"
#include "../includes/Objects.hpp"

Objects::Objects(void) : _n(0), _x(0), _y(0) {}

Objects::Objects(Objects const & obj) : _n(obj._n), _x(obj._x), _y(obj._y){}

Objects::~Objects(void) {}

Objects& Objects::operator=(Objects const &src)
{
	this->_n = src._n;
	this->_x = src._x;
	this->_y = src._y;
	this->_isdead = src._isdead;

	return *this;
}


void Objects::setPosition(int y, int x)
{
	this->setX(x);
	this->setY(y);
}

int Objects::getX(void) const { return this->_x; }

int Objects::getY(void) const { return this->_y; }

void Objects::setX(int x)
{
	int max = getGame()->getX();
	if (x < 0)
		this->_x = 0;
	else if (x >=  max)
		this->_x = max;
	else
		this->_x = x;
}

void Objects::setY(int y)
{
	int max = getGame()->getY();
	if (y < 0)
		this->_y = 0;
	else if (y >=  max)
		this->_y = max;
	else
		this->_y = y;
}

void Objects::update() {}
