/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 14:00:36 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/05 14:21:52 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Peon.hpp"

Peon::Peon() {}

Peon::Peon(std::string name) : Victim(name)
{
	std::cout << "Zog zog" << std::endl;
}

Peon::Peon(const Peon &cpy) : Victim(cpy)
{
	std::cout << "Zog zog" << std::endl;
}
Peon::~Peon()
{
    std::cout << "Bleuark..." << std::endl;
}

Peon&	Peon::operator = (const Peon &src)
{
	this->_name = src.getName();
	return (*this);
}

std::string	Peon::getName() const { return this->_name; }

void	Peon::getPolymorphed(void) const
{
	std::cout << this->_name << " has been turned into a pink pony !" << std::endl;
}
