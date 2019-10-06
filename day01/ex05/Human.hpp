/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 11:49:46 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/02 15:06:52 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_H
# define HUMAN_H

#include <iostream>
#include <string>
#include "Brain.hpp"

class Human
{
    const Brain _brain;
    
public:

    Human();
    ~Human();
    std::string identify() const;
    const Brain & getBrain() const;
};

#endif