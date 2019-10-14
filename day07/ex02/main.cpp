/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 16:38:51 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/11 18:28:49 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main()
{
    
    Array<double> arri(5);
    std::cout << "array size: " << arri.size() << std::endl << std::endl;
    
    arri[0] = -2312321312.321321321;
    arri[1] = 1111.1111;
    arri[2] = 0.0;
    arri[3] = 2489573;
    arri[4] = 51242.33333333333;
    for (unsigned int i = 0; i < arri.size(); i++)
        std::cout << arri[i] << std::endl;

    std::cout << std::endl;
    Array<bool> arrb(5);
    std::cout << "array size: " << arrb.size() << std::endl << std::endl;
    
    arrb[0] = true;
    arrb[1] = false;
    arrb[2] = false;
    arrb[3] = true;
    arrb[4] = true;
    try
    {
        for (unsigned int i = 0; i < 10; i++)
            std::cout << std::boolalpha << arrb[i] << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;
    Array<std::string> arrs(5);
    std::cout << "array size: " << arrs.size() << std::endl << std::endl;
    
    arrs[0] = "scrrrra";
    arrs[1] = "pupu";
    arrs[2] = "purrrrrru";
    arrs[3] = "pum";
    arrs[4] = "PUM PUM";

    for (unsigned int i = 0; i < arrs.size(); i++)
        std::cout << arrs[i] << std::endl;
	return(0);
}