/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 11:49:22 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/02 16:10:27 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <sstream> 
#include "Brain.hpp"

Brain::Brain(){
    return;
}
Brain::~Brain(){
    return;
}
std::string Brain::identify() const
{
    std::stringstream ss;
    std::string str;
    
    ss << this;
    ss >> str;
    return str;
}