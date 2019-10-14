/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 19:55:26 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/10 20:02:22 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_HPP
# define B_HPP

#include <iostream>
#include <stdexcept>
#include "Base.hpp"

class B : public Base
{

public:

    B();
    B(B const &cpy);
    B & operator=(B const &src);
    virtual ~B();

};

#endif