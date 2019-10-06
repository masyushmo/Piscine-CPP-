/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 14:00:22 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/04 16:06:14 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Victim.hpp" 

Victim::Victim() {}

Victim::Victim(std::string name) : _name(name)
{
	std::cout << "Some random victim called " << this->_name << " just popped !" << std::endl;
}

Victim::Victim(const Victim &cpy)
{
	*this = cpy;
	std::cout << "Some random victim called " << this->_name << " just popped !" << std::endl;
}
Victim::~Victim(void)
{
	std::cout << "Victim " << this->_name << " just died for no apparent reason !" << std::endl;
}

Victim&	Victim::operator = (const Victim &src)
{
	this->_name = src.getName();
	return (*this);
}

std::string	Victim::getName() const { return this->_name; }

void	Victim::getPolymorphed() const
{
	std::cout << this->_name << " has been turned into a cute little sheep !" << std::endl;
}

std::ostream	&operator<<(std::ostream &of, Victim const &don)
{
	of << "I'm " << don.getName() << " and I like otters !" << std::endl;
	return (of);
}

