/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 14:00:41 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/05 12:08:07 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Peon.hpp"
#include "Peon_junior.hpp"
#include "Sorcerer.hpp"
#include "Victim.hpp"

int main()
{
    Sorcerer robert("Robert", "the Magnificent");
    std::cout << std::endl;

    Victim jim("Jimmy");
    std::cout << std::endl;

    Peon joe("Joe");
    std::cout << std::endl;

    Peon_junior joji("JoJi");
    std::cout << std::endl;

    std::cout << robert << jim << joe << joji;
    std::cout << std::endl;
    
    robert.polymorph(jim);
    std::cout << std::endl;

    robert.polymorph(joe);
    std::cout << std::endl;

    robert.polymorph(joji);
    std::cout << std::endl;
    
    return 0;
}