/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 11:24:27 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/09 14:33:25 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("noname"), _grade(1) {}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &cpy)
{
    if (cpy.getGrade() > 150)
        throw Bureaucrat::GradeTooLowException();
	else if (cpy.getGrade() < 1)
		throw Bureaucrat::GradeTooHighException();
    _grade = cpy.getGrade();
	*this = cpy;
}

Bureaucrat::~Bureaucrat(void) { }

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat &src)
{
	_grade = src.getGrade();
	return (*this);
}

std::string	Bureaucrat::getName(void)   const { return (_name); }

int Bureaucrat::getGrade(void)	const { return (_grade ); }

void	Bureaucrat::incrementGrade(void)
{
	if (_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	_grade--;
}

void	Bureaucrat::decremenGrade(void)
{
	if (_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	_grade++;
}

std::ostream	&operator << (std::ostream &of, Bureaucrat const &src)
{
	of << src.getName() << ", bureaucrat grade " << src.getGrade() << std::endl;
	return (of);
}

void	Bureaucrat::signForm(Form& form)
{
	try
	{
		form.beSigned(*this);
		std::cout << _name << " signs " << form.getName() << std::endl;
	}
	catch(std:: exception& e)
	{
		std::cout << _name << " cannot sign " << form.getName()
		<< " because : " << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(Form const & form)
{
	try
	{
		form.execute(*this);
		std::cout << _name << " executed " << form.getName() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}

//new class

Bureaucrat::GradeTooHighException::GradeTooHighException() { }

Bureaucrat::GradeTooHighException::GradeTooHighException(GradeTooHighException const &cpy)
{
    *this = cpy;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {}

Bureaucrat::GradeTooHighException& Bureaucrat::GradeTooHighException::operator=(GradeTooHighException const &src)
{
    (void)src;
    return (*this);
}

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Error-> too high grade";
}

//new class

Bureaucrat::GradeTooLowException::GradeTooLowException() { }

Bureaucrat::GradeTooLowException::GradeTooLowException(GradeTooLowException const &cpy)
{
    *this = cpy;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {}

Bureaucrat::GradeTooLowException& Bureaucrat::GradeTooLowException::operator=(GradeTooLowException const &src)
{
   (void)src;
    return (*this);
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Error-> too low grade";
}