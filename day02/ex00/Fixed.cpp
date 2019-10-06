/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 11:14:52 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/03 13:19:57 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed(void) : _fix (0)
{
    std::cout << "Default constructor called" << std::endl;
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

Fixed & Fixed::operator=(Fixed const & rhs)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &rhs)
        this->_fix = rhs.getRawBits();
    return *this;
}

int     Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->_fix;
}
void    Fixed::setRawBits( int const raw )
{
    this->_fix = raw;
}

const int Fixed::_fbits = 8;