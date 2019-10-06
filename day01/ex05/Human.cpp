/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 11:49:42 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/02 15:10:55 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Human.hpp"

Human::Human(){
    return;
}
Human::~Human(){
    return;
}
std::string Human::identify() const
{
    return getBrain().identify();
}
const Brain & Human::getBrain(void) const
{
    return _brain;
}