/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Basease.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 19:50:35 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/10 20:00:43 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "B.hpp"
#include "C.hpp"
#include "A.hpp"

Base::Base()
{

}

Base::Base(Base const &cpy)
{
    *this = cpy;
}

Base & Base::operator=(Base const &)
{
    return *this;
}

Base::~Base()
{

}

Base*   Base::generate(void)
{

	switch (rand() % 3) {
		case 0:
            return new A;
		case 1:
            return new B;
		case 2:
            return new C;
		default:
            return NULL;
	}
}

void Base::identify_from_pointer(Base * p)
{
    if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
    else
        std::cout << "Bad pointer" << std::endl;
}

void Base::identify_from_reference( Base & p )
{
    try
    {
        try
        {
            (void)dynamic_cast<A &>(p);
            std::cout << "A" << std::endl;
        }
        catch (std::bad_cast &bc)
        {
        
        }
        try
        {
            (void)dynamic_cast<B &>(p);
            std::cout << "B" << std::endl;
        }
        catch (std::bad_cast &bc)
        {

        }
        try
        {
            (void)dynamic_cast<C &>(p);
            std::cout << "C" << std::endl;
        }
        catch (std::bad_cast &bc)
        {
           
        }
    }
    catch(const std::exception& e)
    {
        std::cout << "ERRRRROR" << std::endl;
    }
    
    
}
