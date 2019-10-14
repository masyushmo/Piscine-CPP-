/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 19:50:41 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/10 20:18:19 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

#include <iostream>
#include <stdexcept>

class Base
{

public:

    Base();
    Base(Base const &cpy);
    Base & operator=(Base const &src);
    virtual ~Base();

    Base * generate(void);
    void identify_from_pointer( Base * p );
    void identify_from_reference( Base & p );

};

#endif