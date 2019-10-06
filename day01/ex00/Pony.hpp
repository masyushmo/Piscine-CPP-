// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Pony.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mmasyush <mmasyush@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/10/01 17:35:26 by mmasyush          #+#    #+#             //
//   Updated: 2019/10/01 17:35:26 by mmasyush         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef PONY_H
# define PONY_H

#include <string>
#include <iostream>

class Pony
{
public:
    std::string imya;
    std::string cvet;
    int vozrast;
    bool edinorog;
    bool letaet;
    bool chelovek;
    
    Pony(std::string, std::string, int age,  bool isUnicorn, bool canFly, bool isHuman);
    ~Pony(void);
};

#endif