/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 16:28:00 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/09 17:48:27 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATINFORM_HPP
# define SHRUBBERYCREATINFORM_HPP

#include <iostream>
#include <stdexcept>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{

private:

    std::string _name;

public:

    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string name);
    ShrubberyCreationForm(ShrubberyCreationForm const &cpy);
    ShrubberyCreationForm & operator=(ShrubberyCreationForm const &src);
    virtual ~ShrubberyCreationForm();

    std::string getFormName() const;
    void execute(Bureaucrat const & executor) const;

};

#endif
