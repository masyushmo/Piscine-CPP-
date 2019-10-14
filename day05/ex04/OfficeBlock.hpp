/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 17:49:13 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/09 18:37:15 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OFFICEBLOCK_HPP
# define OFFICEBLOCK_HPP

#include <iostream>
#include <stdexcept>
#include "Intern.hpp"

class OfficeBlock
{

private:

    Intern *_intern;
    Bureaucrat *_signer;
    Bureaucrat *_executor;

    OfficeBlock(OfficeBlock const &cpy);
    OfficeBlock & operator=(OfficeBlock const &src);

public:

    OfficeBlock();
    OfficeBlock(Intern *intern, Bureaucrat *signer, Bureaucrat *executor);
    virtual ~OfficeBlock();

    void    setIntern(Intern &i);
    void    setSigner(Bureaucrat &s);
    void    setExecutor(Bureaucrat &e);

    void	doBureaucracy(std::string formType, std::string bureaucratType);

    class	Exeption : public std::exception
	{
	
    public:

		Exeption(void);
		Exeption(const Exeption &cpy);
		virtual ~Exeption(void) throw();
		Exeption& operator = (const Exeption &old);
		const char* what() const throw();
	};

};

#endif