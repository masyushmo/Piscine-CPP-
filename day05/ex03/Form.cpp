/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 16:30:03 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/09 16:35:29 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("noname"), _signed(false), _gradeSign(1), _gradeExec(1) { }

Form::Form(std::string name, int gradeToSign, int gradeToExecute) :
    _name(name), _signed(0), _gradeSign(gradeToSign), _gradeExec(gradeToExecute)
{
    if (_gradeSign > 150 || _gradeExec > 150)
		throw GradeTooLowException();
    else if (_gradeSign < 1 || _gradeExec < 1)
		throw GradeTooHighException();
}

Form::Form(Form const &cpy) :
    _name(cpy.getName()), _signed(false), _gradeSign(cpy.getGradeSign()), _gradeExec(cpy.getGradeExec())
{
    if (_gradeSign > 150 || _gradeExec > 150)
		throw GradeTooLowException();
    else if (_gradeSign < 1 || _gradeExec < 1)
		throw GradeTooHighException();
    return;
}

Form & Form::operator=(Form const &) { return *this; }

Form::~Form() {}

std::string Form::getName() const { return this->_name; }

bool Form::getIsSigned() const { return this->_signed; }

int Form::getGradeSign() const { return this->_gradeSign; }

int Form::getGradeExec() const { return this->_gradeExec; }


void Form::beSigned(Bureaucrat & src)
{
    if (_gradeSign <= src.getGrade())
        _signed = true;
    else
        throw GradeTooLowException();
}

std::ostream	&operator<<(std::ostream &of, Form const &src)
{
	of << src.getName() << " now is " << src.getIsSigned() << " , it requires " <<
        src.getGradeSign() << " grade to sign it and " << src.getGradeExec() << " grade to execute it " << std::endl; 
	return (of);
}

//new class

Form::GradeTooHighException::GradeTooHighException() { }

Form::GradeTooHighException::GradeTooHighException(GradeTooHighException const &cpy)
{
    *this = cpy;
}

Form::GradeTooHighException::~GradeTooHighException() throw() {}

Form::GradeTooHighException& Form::GradeTooHighException::operator=(GradeTooHighException const &src)
{
    (void)src;
    return (*this);
}

const char * Form::GradeTooHighException::what() const throw()
{
    return "Error-> too high grade";
}

//new class

Form::GradeTooLowException::GradeTooLowException() { }

Form::GradeTooLowException::GradeTooLowException(GradeTooLowException const &cpy)
{
    *this = cpy;
}

Form::GradeTooLowException::~GradeTooLowException() throw() {}

Form::GradeTooLowException& Form::GradeTooLowException::operator=(GradeTooLowException const &src)
{
   (void)src;
    return (*this);
}

const char * Form::GradeTooLowException::what() const throw()
{
    return "Error-> too low grade";
}

// new class 

Form::IsSignedExeption::IsSignedExeption(void) { }

Form::IsSignedExeption::IsSignedExeption(const IsSignedExeption &cpy)
{
    *this = cpy;
}
Form::IsSignedExeption::~IsSignedExeption(void) throw() { }

Form::IsSignedExeption& Form::IsSignedExeption::operator = (const IsSignedExeption&)
{
    return (*this);
}

const char* Form::IsSignedExeption::what() const throw()
{
    return ("Error-> not signed!!");
}