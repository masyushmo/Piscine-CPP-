/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 19:45:00 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/03 19:52:46 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed
{

private:

    int _fix;
    static const int _fbits; 

public:

    Fixed(void);
    Fixed(const int i);
    Fixed(const float f);
    Fixed(Fixed const & src);
    ~Fixed();
    
    int     getRawBits( void ) const;
    void    setRawBits( int const raw );
    float   toFloat( void ) const;
    int     toInt( void ) const;
    
    Fixed & operator=(Fixed const & rhs);

    bool   operator>(Fixed const & rhs) const;
    bool   operator<(Fixed const & rhs) const;
    bool   operator>=(Fixed const & rhs) const;
    bool   operator<=(Fixed const & rhs) const;
    bool   operator==(Fixed const & rhs) const;
    bool   operator!=(Fixed const & rhs) const;

    Fixed  operator+(Fixed const & rhs) const;
    Fixed  operator-(Fixed const & rhs) const;
    Fixed  operator/(Fixed const & rhs) const;
    Fixed  operator*(Fixed const & rhs) const;
    Fixed  operator++();
    Fixed  operator--();
    Fixed  operator++(int);
    Fixed  operator--(int);

    static Fixed  & max(Fixed & a, Fixed & b);
    static Fixed  & min(Fixed & a, Fixed & b);
    static Fixed const  & max(Fixed const & a, Fixed const & b);
    static Fixed const  & min(Fixed const & a, Fixed const & b);
};

std::ostream   &operator<<(std::ostream &of, Fixed const &f);

#endif
