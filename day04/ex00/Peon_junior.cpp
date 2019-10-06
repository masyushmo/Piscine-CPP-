/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon_junior.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 16:25:16 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/05 14:21:33 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Peon_junior.hpp"

Peon_junior::Peon_junior() {}

Peon_junior::Peon_junior(std::string name) : Peon(name)
{
	std::cout << "Holla amigos, am " << this->_name << std::endl;
}

Peon_junior::Peon_junior(const Peon_junior &cpy) : Peon(cpy)
{
	std::cout << "Holla amigos!" << std::endl;
}
Peon_junior::~Peon_junior()
{
    std::cout << "Ight Imma Head Out!!" << std::endl;
}

Peon_junior&	Peon_junior::operator = (const Peon_junior &src)
{
	this->_name = src.getName();
	return (*this);
}

std::string	Peon_junior::getName() const { return this->_name; }

void	Peon_junior::getPolymorphed(void) const
{
	std::cout <<  "Wow, " << this->_name << " just disappeared!" << std::endl;
}