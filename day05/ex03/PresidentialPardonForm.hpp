/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 16:28:18 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/09 16:34:37 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <stdexcept>
#include "Form.hpp"

class PresidentialPardonForm : public Form
{

private:

    std::string _name;

public:

    PresidentialPardonForm();
    PresidentialPardonForm(std::string name);
    PresidentialPardonForm(PresidentialPardonForm const &cpy);
    PresidentialPardonForm & operator=(PresidentialPardonForm const &src);
    ~PresidentialPardonForm();

    std::string getFormName() const;
    void execute(Bureaucrat const & executor) const;

};

#endif