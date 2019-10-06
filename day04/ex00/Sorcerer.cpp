/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 14:00:09 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/05 12:08:03 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sorcerer.hpp"

Sorcerer::Sorcerer() : _name("Rob"), _title("the Common") {}

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title)
{
	std::cout << this->_name << ", " <<  this->_title << ", is born !" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &s)
{
	*this = s;
	std::cout <<  this->_name << ", " <<  this->_title << ", is born !" << std::endl;
}

Sorcerer::~Sorcerer(void)
{
	std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer&	Sorcerer::operator = (const Sorcerer &src)
{
	this->_name = src.getName();
	this->_title = src.getTitle();
	return (*this);
}

std::string	Sorcerer::getName(void)	const { return this->_name; }
std::string	Sorcerer::getTitle(void) const { return this->_title; }

void		Sorcerer::polymorph(Victim const &pol) const { pol.getPolymorphed(); }

std::ostream	&operator << (std::ostream &of, Sorcerer const &don)
{
	of << "I am " << don.getName() << ", " << don.getTitle() << ", and I like ponies !" << std::endl;
	return (of);
}