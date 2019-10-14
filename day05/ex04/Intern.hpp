/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 16:30:29 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/09 18:12:35 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{

private:
	
    std::string	_formType;
	std::string	_bureaucratType; 

public:
	
    Intern();
	Intern(const Intern &cpy);
	~Intern();
	Intern&	operator = (const Intern &src);

	Form*	makeForm(std::string formType, std::string bureaucratType);
};

#endif