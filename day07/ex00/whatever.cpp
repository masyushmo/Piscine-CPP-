/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 12:25:51 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/11 15:57:46 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<typename T>
void swap(T & x, T & y)
{
    T temp = x;

    x = y;
    y = temp;
}

template<typename T>
T const & max(T const & x, T const & y)
{
    return (x > y ? x : y);
}

template<typename T>
T const & min(T const & x, T const & y)
{
    return (x < y ? x : y);
}

int main( void )
{
    {
        int a = 2;
        int b = 3;
        
        ::swap( a, b );

        std::cout << "a = " << a << ", b = " << b << std::endl;
        std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
        std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
        
        
        std::string c = "chaine1";
        std::string d = "chaine2";
        
        ::swap(c, d);
        
        std::cout << "c = " << c << ", d = " << d << std::endl;
        std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
        std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    }

    // class Test
    // {
    //     public:
    //         Test(float x) : _x(x) {}
    //         float _x;
    // };

    // Test * a = new Test(22.1);
    // Test * b = new Test(22.2);
    // ::swap(a->_x, b->_x);
    // std::cout << "a = " << a->_x << ", b = " << b->_x << std::endl;
    // std::cout << "min( a, b ) = " << ::min( a->_x, b->_x ) << std::endl;
    // std::cout << "max( a, b ) = " << ::max( a->_x, a->_x ) << std::endl;

    return 0;
}