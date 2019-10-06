/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 19:44:55 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/03 20:25:07 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void) : _fix (0)
{
    return;
}

Fixed::Fixed(const int i)
{
    this->setRawBits(i << Fixed::_fbits);
    return;
}

Fixed::Fixed(const float f)
{
    this->setRawBits(roundf(f * (1 << Fixed::_fbits)));
    return;
}

Fixed::Fixed(Fixed const & src)
{
    *this = src;
    return;
}

Fixed::~Fixed()
{
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

int     Fixed::getRawBits( void ) const
{
    return this->_fix;
}

void    Fixed::setRawBits( int const raw )
{
    this->_fix = raw;
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
    if (this != &rhs)
        this->_fix = rhs.getRawBits();
    return *this;
}

std::ostream   &operator<<(std::ostream &of, Fixed const &f)
{
    of << f.toFloat();
    return(of);
}

bool   Fixed::operator>(Fixed const & rhs) const
{
    return(this->_fix > rhs.getRawBits());
}
bool   Fixed::operator<(Fixed const & rhs) const
{
    return(this->_fix > rhs.getRawBits());
}
bool   Fixed::operator>=(Fixed const & rhs) const
{
    return(this->_fix > rhs.getRawBits());
}
bool   Fixed::operator<=(Fixed const & rhs) const
{
    return(this->_fix > rhs.getRawBits());
}
bool   Fixed::operator==(Fixed const & rhs) const
{
    return(this->_fix > rhs.getRawBits());
}
bool   Fixed::operator!=(Fixed const & rhs) const
{
    return(this->_fix > rhs.getRawBits());
}

Fixed  Fixed::operator+(Fixed const & rhs) const
{
    Fixed temp;

    temp._fix = (this->_fix + rhs.getRawBits());
    return temp;
}
Fixed  Fixed::operator-(Fixed const & rhs) const
{
    Fixed temp;

    temp._fix = (this->_fix - rhs.getRawBits());
    return temp;
}
Fixed  Fixed::operator/(Fixed const & rhs) const
{
    Fixed temp;

    temp._fix = (this->_fix / rhs.getRawBits()) << _fbits;
    if (rhs.getRawBits() == 0)
        return(Fixed(0));
    return(temp);
}
Fixed  Fixed::operator*(Fixed const & rhs) const
{
    Fixed temp;
    temp._fix = (this->_fix * rhs.getRawBits()) >> _fbits;
    return(temp);
}

Fixed  Fixed::operator++()
{
    this->_fix += 1;
    return(*this);
}
Fixed  Fixed::operator--()
{
    this->_fix -= 1;
    return(*this);
}
Fixed  Fixed::operator++(int)
{
    Fixed temp(*this);
   

    ++(*this);
    return(temp);
}
Fixed  Fixed::operator--(int)
{
    Fixed temp(*this);

    --(*this);
    return(temp);
}

Fixed  & Fixed::max(Fixed & a, Fixed & b)
{
    if (a.getRawBits() > b.getRawBits())
        return a;
    else
        return b;
}
Fixed  & Fixed::min(Fixed & a, Fixed & b)
{
    if (a.getRawBits() < b.getRawBits())
        return a;
    else
        return b;
}
Fixed const  &Fixed::max(Fixed const & a, Fixed const & b)
{
    if (a.getRawBits() > b.getRawBits())
        return a;
    else
        return b;
}
Fixed const  & Fixed::min(Fixed const & a, Fixed const & b)
{
    if (a.getRawBits() < b.getRawBits())
        return a;
    else
        return b;
}


const int Fixed::_fbits = 8;