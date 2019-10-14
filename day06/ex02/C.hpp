/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 19:56:10 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/10 20:01:59 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_HPP
# define C_HPP

#include <iostream>
#include <stdexcept>
#include "Base.hpp"

class C : public Base
{

public:

    C();
    C(C const &cpy);
    C & operator=(C const &src);
    virtual ~C();

};

#endif