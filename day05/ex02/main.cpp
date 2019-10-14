/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 16:07:18 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/09 16:20:52 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 11:24:06 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/09 15:51:38 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int	main()
{
    try
    {
        Bureaucrat maks = Bureaucrat("Maks", 144);
        Bureaucrat lebovsky = Bureaucrat("Dude", 24);

        std::cout << maks << std::endl;
        std::cout << lebovsky << std::endl;

        PresidentialPardonForm presidential = PresidentialPardonForm("presidential");
        RobotomyRequestForm robot = RobotomyRequestForm("robot");
        ShrubberyCreationForm shrubbery = ShrubberyCreationForm("shrubbery");
        std::cout <<  shrubbery << std::endl;
        std::cout << robot << std::endl;
        std::cout << presidential << std::endl;

        maks.executeForm(robot);
        maks.signForm(robot);
        maks.executeForm(robot);

        lebovsky.signForm(presidential);
        lebovsky.decremenGrade();
        lebovsky.signForm(presidential);
        lebovsky.executeForm(presidential);

         maks.decremenGrade();
        maks.signForm(shrubbery);
        maks.executeForm(shrubbery);
        // lebovsky.decremenGrade();
        // std::cout << lebovsky << std::endl;
        // lebovsky.signForm(formea);
        // std::cout << formea.getName() << formea.getIsSigned() << std::endl;

    }
    catch(std:: exception& e)
    {
         std::cout << e.what() << std::endl;
    }
	return (0);
}
