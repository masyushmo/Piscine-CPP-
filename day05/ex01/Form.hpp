/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 17:54:33 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/09 10:50:51 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{

private:

    std::string const _name;
    bool _signed;
    int const _gradeSign;
    int const _gradeExec;

public:

    Form();
    Form(std::string name, int gradeToSign, int gradeToExecute);
    Form(Form const &cpy);
    Form & operator=(Form const &src);
    virtual ~Form();

    std::string getName() const;
    bool getIsSigned() const;
    int getGradeSign() const;
    int getGradeExec() const;
    void beSigned(Bureaucrat & src);

    class GradeTooHighException : public std::exception
    {
        public:

            GradeTooHighException();
            GradeTooHighException(GradeTooHighException const &cpy);
            GradeTooHighException & operator=(GradeTooHighException const &src);
            virtual ~GradeTooHighException() throw();
            const char * what() const throw();
    };

    class GradeTooLowException : public std::exception
    {
        public:

            GradeTooLowException();
            GradeTooLowException(GradeTooLowException const &cpy);
            GradeTooLowException & operator=(GradeTooLowException const &src);
            virtual ~GradeTooLowException() throw();
            const char * what() const throw();
    };

};

std::ostream  & operator<<(std::ostream &of, Form const &src);

#endif