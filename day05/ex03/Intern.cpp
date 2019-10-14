/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 16:30:33 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/09 17:44:28 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void) { }

Intern::Intern(const Intern &cpy)
{
     *this = cpy;
}

Intern::~Intern(void) { }

Intern&	Intern::operator = (const Intern &)
{
    return (*this);
}

Form*	Intern::makeForm(std::string formType, std::string bureaucratType)
{
	if (formType == "Shrubbery")
    {
        std::cout << "Intern creates " << formType << std::endl;
		return (new ShrubberyCreationForm(bureaucratType));
    }
    else if (formType == "Robotomy")
    {
        std::cout << "Intern creates " << formType << std::endl;
		return (new RobotomyRequestForm(bureaucratType));
    }
    else if (formType == "Presidential")
    {
        std::cout << "Intern creates " << formType << std::endl;
		return (new PresidentialPardonForm(bureaucratType));
    }
    else
		std::cout << "Error: bad form!" << std::endl;
	return (0);
}
