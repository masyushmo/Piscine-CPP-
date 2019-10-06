/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/05 12:23:15 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/05 23:29:19 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AMateria.hpp"

AMateria::AMateria() {}

AMateria::AMateria(std::string const & type) : type_(type), xp_(0) {}

AMateria::AMateria(const AMateria &cpy)
{
    *this = cpy;
    return;
}

AMateria::~AMateria() {}

AMateria & AMateria::operator=(const AMateria &src)
{
    this->xp_ = src.getXP();
    this->type_ = src.getType();
    return *this;
}

std::string const & AMateria::getType() const { return this->type_; }
unsigned int AMateria::getXP() const { return this->xp_; }
void AMateria::setXp(unsigned int xp)
{ 
    this->xp_ = xp;
    return;
}

void AMateria::use(ICharacter& target)
{
    (void)target;
    this->xp_ += 10;
}
