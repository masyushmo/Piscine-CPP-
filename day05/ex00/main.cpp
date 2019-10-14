/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 14:00:51 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/08 17:55:30 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
    try
    {
        Bureaucrat maks = Bureaucrat("Maks", 1);
        Bureaucrat lebovsky = Bureaucrat("Dude", 150);

        std::cout << maks << std::endl;
        std::cout << lebovsky << std::endl;

        maks.decremenGrade();
        std::cout << maks << std::endl;
        lebovsky.decremenGrade();
        std::cout << lebovsky << std::endl;

    }
    catch(std:: exception& e)
    {
         std::cout << e.what() << std::endl;
    }
	return (0);
}
