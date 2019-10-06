/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 11:14:46 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/03 13:00:55 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed
{

public:

    Fixed(void);
    Fixed(Fixed const & src);
    ~Fixed();

    Fixed & operator=(Fixed const & rhs);
    
    int     getRawBits( void ) const;
    void    setRawBits( int const raw );

private:

    int _fix;
    static const int _fbits; 
};

#endif