/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 13:22:05 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/03 15:42:08 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void) : _fix (0)
{
    std::cout << "Default constructor called" << std::endl;
    return;
}

Fixed::Fixed(const int i)
{
    std::cout << "Int constructor called" << std::endl;
    this->setRawBits(i << Fixed::_fbits);
    return;
}

Fixed::Fixed(const float f)
{
     std::cout << "Float constructor called" << std::endl;
    this->setRawBits(roundf(f * (1 << Fixed::_fbits)));
    return;
}

Fixed::Fixed(Fixed const & src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
    return;
}

float   Fixed::toFloat( void ) const
{
    return ((float)this->_fix / (1 << Fixed::_fbits));
}
int     Fixed::toInt( void ) const
{
    return((int)this->_fix >> Fixed::_fbits);
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &rhs)
        this->_fix = rhs.getRawBits();
    return *this;
}

std::ostream   &operator<<(std::ostream &of, Fixed const &f)
{
    of << f.toFloat();
    return(of);
}

int     Fixed::getRawBits( void ) const
{
    return this->_fix;
}

void    Fixed::setRawBits( int const raw )
{
    this->_fix = raw;
}

const int Fixed::_fbits = 8;
