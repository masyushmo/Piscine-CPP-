/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 14:01:05 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/08 17:53:55 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>

class Bureaucrat
{

private:

    std::string const _name;
    int _grade;

public:

    Bureaucrat();
    Bureaucrat(std::string name, int grade);
    Bureaucrat(Bureaucrat const &cpy);
    Bureaucrat & operator=(Bureaucrat const &src);
    virtual ~Bureaucrat();

    std::string getName() const;
    int getGrade() const;

    void incrementGrade();
    void decremenGrade();

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
        const char * what() const  throw();
    };

};

std::ostream  & operator<<(std::ostream &of, Bureaucrat const &src);

#endif
