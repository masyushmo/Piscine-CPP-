/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 19:55:07 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/10 20:02:33 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_HPP
# define A_HPP

#include <iostream>
#include <stdexcept>
#include "Base.hpp"

class A : public Base
{

public:

    A();
    A(A const &cpy);
    A & operator=(A const &src);
    virtual ~A();

};

#endif