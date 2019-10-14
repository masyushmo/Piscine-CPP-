/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 17:54:58 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/09 11:39:18 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
    try
    {
        Bureaucrat maks = Bureaucrat("Maks", 1);
        Bureaucrat lebovsky = Bureaucrat("Dude", 50);

        std::cout << maks << std::endl;
        std::cout << lebovsky << std::endl;

        Form form = Form("whaaaat", 2, 1);
        Form formea = Form("dudewhat", 150, 1);
        std::cout << form << std::endl;
        std::cout << formea << std::endl;
        
        maks.decremenGrade();
        std::cout << maks << std::endl;
        form.beSigned(maks);
         std::cout << form.getName() << form.getIsSigned() << std::endl;
        maks.signForm(form);
        lebovsky.decremenGrade();
        std::cout << lebovsky << std::endl;
        lebovsky.signForm(formea);
        // std::cout << formea.getName() << formea.getIsSigned() << std::endl;

    }
    catch(std:: exception& e)
    {
         std::cout << e.what() << std::endl;
    }
	return (0);
}
