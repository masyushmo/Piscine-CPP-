/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 16:28:28 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/09 16:35:25 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm(void) : Form("robot", 72, 45)
{
	_name = "noname";
}

RobotomyRequestForm::RobotomyRequestForm(std::string name) : Form("robot", 72, 45)
{
	_name = name;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &cpy)
{
    *this = cpy;
}

RobotomyRequestForm::~RobotomyRequestForm(void) { }

std::string	RobotomyRequestForm::getFormName() const
{
    return (_name);
}

RobotomyRequestForm&	RobotomyRequestForm::operator = (const RobotomyRequestForm &)
{
    return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const &b) const
{
	srand(time(NULL));
	if (this->getIsSigned())
	{
		if (b.getGrade() >= this->getGradeExec())
		{
			if (rand() % 2)
				std::cout << _name << " has been robotomized successfully" << std::endl;
			else
				std::cout << "it's a failure" << std::endl;
		}
		else
			throw GradeTooLowException();
	}
	else
		throw IsSignedExeption();
}