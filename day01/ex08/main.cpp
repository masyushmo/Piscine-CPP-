/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 19:37:23 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/02 21:07:27 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include <iostream>
#include <string>

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
        Human 		testman;
        std::string attac = argv[1];
        std::string	target = argv[2];
        if ((attac.compare("melee") != 0) && (attac.compare("range") != 0) && (attac.compare("wult!") != 0 || (target.compare("") == 0)))
        {
            std::cout << "Usage: ./a.out {melee, range, wult!} {Target}" << std::endl;
		    return (0);
        }
        
        std::cout << "Just output:" << std::endl;
		testman.action("melee", "enemy1");

		testman.action("ranged", "enemy2");

		testman.action("wult", "enemy3");

         std::cout << "Chosen output:" << std::endl;
        testman.action(attac, target);
	}
	else
	{
		std::cout << "Usage: ./a.out {melee, range, wult!} {Target}" << std::endl;
		return (0);
    }
    return(0);
}