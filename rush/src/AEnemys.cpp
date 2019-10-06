/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AEnemys.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 02:41:39 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/06 11:25:02 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <ncurses.h>
#include <typeinfo>
#include "../includes/AEnemys.hpp"
#include "../includes/AFly.hpp"
#include "../includes/Objects.hpp"

AEnemy::AEnemy()
{
	this->_speed = 30 + std::rand() % 42;
	this->_type = std::rand() % 3;
	this->_x = std::rand() % COLS;
	this->_y = 0;
	Objects::setH(4); 
	Objects::setW(8);
	Objects::setType("enemy"); 
}
AEnemy::AEnemy(AEnemy const & obj)
{
	*this = obj;
}
AEnemy::~AEnemy(void) {}

AEnemy& AEnemy::operator=(AEnemy const &)
{
	return *this;
}

char AEnemy::getType(void)
{
	return this->_type;
}

void AEnemy::update(void)
{
	this->_n++;

	if (this->_n >= _speed)
	{
		this->_y = this->_y + 1;
		this->_n = 0;
	}
}

void AEnemy::draw(void)
{
	if (this->_y >= LINES)
		return;
	if (this->_type == 0)
	{
		move(this->_y, this->_x);
		mvprintw(this->_y - 1, this->_x, "    __!__    ");
		mvprintw(this->_y, this->_x, "_____(_)_____");
	}
	else if (this->_type == 1)
	{
		move(this->_y, this->_x);
		mvprintw(this->_y - 1, this->_x, "    __!__    ");
		mvprintw(this->_y, this->_x, "_____/ \\_____");
	}
	else if (this->_type == 2)
	{
		move(this->_y, this->_x);
		mvprintw(this->_y - 1, this->_x, "     \\ /     ");
		mvprintw(this->_y, this->_x, "    --o--    ");
	}
}