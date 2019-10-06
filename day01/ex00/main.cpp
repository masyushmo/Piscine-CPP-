/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 17:35:43 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/02 10:12:15 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

void    give_info(Pony const &pony)
{
    std::cout << "It's " << pony.imya << ", young " << pony.vozrast << " old ponny, that";
    if (pony.letaet == false)
        std::cout << ", sadly, can't fly ;(";
    else
          std::cout << "can fly ;) ";
    if (pony.edinorog == false)
        std::cout << ", because she is not a unicorn";
    else
          std::cout << "because she is a unicorn";
    if (pony.edinorog == false)
        std::cout << " and also she cannot transform in to a human";
    else
          std::cout << " and also she can transform in to a human";
    std::cout << ". But, most important, that she is of beautiful \"" << pony.cvet << "\" color!" << std::endl;
}

int main(void)
{
    std::cout << "From (Stack)" << std::endl;
    Pony po("Pinkie Pie","Brilliant raspberry", 16, 0, 0, 0);
    give_info(po);
    std::cout << "From (Heap)" << std::endl;
    Pony *ny = new Pony("Twilight Sparkle","Moderate purple", 18, 1, 1, 1);
    give_info(*ny);
    delete ny;
    return(0);
}