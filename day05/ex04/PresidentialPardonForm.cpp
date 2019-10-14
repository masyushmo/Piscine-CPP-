/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 16:28:14 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/09 16:35:27 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("presidential", 25, 5)
{
	_name = "noname";
}

PresidentialPardonForm::PresidentialPardonForm(std::string name) : Form("presidential", 25, 5)
{
	_name = name;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &cpy)
{
    *this = cpy;
}

std::string	PresidentialPardonForm::getFormName() const
{
    return (_name);
}

PresidentialPardonForm::~PresidentialPardonForm() { }

PresidentialPardonForm&	PresidentialPardonForm::operator = (const PresidentialPardonForm &)
{
    return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const &b) const
{
	if (this->getIsSigned())
	{
		if (b.getGrade() >= this->getGradeExec())
			std::cout << b.getName() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
		else
			throw GradeTooLowException();
	}
	else
		throw IsSignedExeption();
}
