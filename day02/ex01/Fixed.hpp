/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 13:22:12 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/03 13:35:18 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed
{

public:

    Fixed(void);
    Fixed(const int i);
    Fixed(const float f);
    Fixed(Fixed const & src);
    ~Fixed();

    Fixed & operator=(Fixed const & rhs);
    
    int     getRawBits( void ) const;
    void    setRawBits( int const raw );
    float   toFloat( void ) const;
    int     toInt( void ) const;

private:

    int _fix;
    static const int _fbits; 
};

std::ostream   &operator<<(std::ostream &of, Fixed const &f);

#endif
