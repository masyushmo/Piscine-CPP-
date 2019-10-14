/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 17:49:08 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/09 18:46:16 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OfficeBlock.hpp"

OfficeBlock::OfficeBlock() : _intern(NULL), _signer(NULL), _executor(NULL) { }

OfficeBlock::OfficeBlock(Intern *intern, Bureaucrat *signer, Bureaucrat *executor) : _intern(intern), _signer(signer), _executor(executor) { }

OfficeBlock::~OfficeBlock() { }

void	OfficeBlock::setIntern(Intern &i)
{
    _intern = &i;
}

void	OfficeBlock::setSigner(Bureaucrat &s)
{
    _signer = &s;
}

void	OfficeBlock::setExecutor(Bureaucrat &e)
{
    _executor = &e;
}

void	OfficeBlock::doBureaucracy(std::string formType, std::string bureaucratType)
{
	Form* form;

	try
	{
		if (_intern && _signer && _executor)
        {
			form = _intern->makeForm(formType, bureaucratType);
            _signer->signForm(*form);
            _executor->executeForm(*form);        
        }
		else
			throw Exeption();
	}
	catch (std::exception &e)
    {
       std::cout << e.what() << std::endl;
    }
}

//new class

OfficeBlock::Exeption::Exeption() { }

OfficeBlock::Exeption::Exeption(const Exeption &cpy)
{
    *this = cpy;
}

OfficeBlock::Exeption::~Exeption() throw() { }

OfficeBlock::Exeption& OfficeBlock::Exeption::operator = (const Exeption &)
{
    return (*this);
}

const char* OfficeBlock::Exeption::what() const throw()
{
    return ("Error: can't create form");
}
