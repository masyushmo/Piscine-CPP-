/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 16:51:49 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/04 19:46:48 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
    std::cout << "* click click click *" << std::endl;
    return;
}

RadScorpion::RadScorpion(const RadScorpion &cpy) : Enemy(cpy)
{
    std::cout << "* click click click *" << std::endl;
    return;
}   

RadScorpion::~RadScorpion()
{
    std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion&	RadScorpion::operator = (const RadScorpion &src)
{
    Enemy::operator=(src);
    return *this;
}
