// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ex01.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mmasyush <mmasyush@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/10/01 18:59:51 by mmasyush          #+#    #+#             //
//   Updated: 2019/10/01 18:59:52 by mmasyush         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>

void    memoryLeak()
{
    std::string* panthere = new std::string("String panthere");
    std::cout << *panthere << std::endl;
    delete panthere;
}