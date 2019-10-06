/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AProjs.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 02:44:59 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/06 11:09:59 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <ncurses.h>
#include "../includes/AProjs.hpp"
#include "../includes/AEnemys.hpp"
#include "../includes/Objects.hpp"

AProj::AProj()
{
	Objects::setType("proj");
	Objects::setW(1); 
	Objects::setH(1); 
}

AProj::AProj(int y, int x)
{
	this->_x = x;
	this->_y = y - 1;
}
AProj::AProj(AProj const & obj)
{
	*this = obj;
}
AProj::~AProj(void) {}

AProj& AProj::operator=(AProj const &)
{
	return *this;
}

void AProj::update()
{
	this->_n++;

	if (this->_n >= 9)
	{
		this->_y = this->_y - 1;
		this->_n = 0;
	}
}

void AProj::draw(void)
{
	if (this->_y < 0)
		return;

	move(this->_y, this->_x);
	addch('|');
}