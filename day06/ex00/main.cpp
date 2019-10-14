/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 11:53:27 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/10 18:28:17 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        double litd;
        int lit;

        lit = std::atoi(argv[1]);
        litd = std::atof(argv[1]);

        if (std::isnan(litd) || lit > 127 || lit < 0)
            std::cout << "char: impossible" << std::endl;
        else if(!std::isprint(lit))
            std::cout << "char: Non displayable" << std::endl;
        else
            std::cout << "char: " << static_cast<char>(lit) << std::endl;
        if (!std::isnan(litd) && !std::isinf(lit))
             std::cout << "int: " << static_cast<int>(lit) << std::endl;
        else
            std::cout << "int: impossible" << std::endl;
        if (std::floor(litd) == litd)
		    std::cout << "flaot: " << static_cast<float>(litd) << ".0f" << std::endl;
	    else
		    std::cout << std::setprecision(8) << "flaot: " << static_cast<float>(litd) << "f" << std::endl;
        if (std::floor(litd) == litd)    
            std::cout << "double: " << static_cast<double>(litd) << ".0" << std::endl;
        else
            std::cout << std::setprecision(16) << "double: " << static_cast<double>(litd) << std::endl;
    }
    else
		std::cout << "usage: ./convert {char || int || float}" << std::endl;
    return 0;
}
