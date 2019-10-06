// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Pony.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mmasyush <mmasyush@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/10/01 17:35:19 by mmasyush          #+#    #+#             //
//   Updated: 2019/10/01 17:35:19 by mmasyush         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //


#include <string>
#include <iostream>
#include "Pony.hpp"

Pony::Pony(std::string name, std::string color, int age,  bool isUnicorn, bool canFly, bool isHuman)
    : imya(name), cvet(color), vozrast(age), edinorog(isUnicorn), letaet(canFly), chelovek(isHuman)
{
    std::cout << "Say \"Hi!\" to a new ponny that just showed up \033[0;32m｡^‿^｡\033[0;37m" << std::endl;
    return;
}
Pony::~Pony()
{
    std::cout << "Its night time, soo all LiL Ponnys must go to sleep \033[0;32m(/¯◡ ‿ ◡)/¯\033[0;37m" << std::endl;
    return;
}