/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 11:25:51 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/09 14:39:04 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTMYREQUESTFORM_HPP
# define ROBOTMYREQUESTFORM_HPP

#include <iostream>
#include <stdexcept>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{

private:

    std::string _name;


public:

    RobotomyRequestForm();
    RobotomyRequestForm(std::string name);
    RobotomyRequestForm(RobotomyRequestForm const &cpy);
    RobotomyRequestForm & operator=(RobotomyRequestForm const &src);
    virtual ~RobotomyRequestForm();

    std::string getFormName() const;
    void execute(Bureaucrat const & executor) const;

};

#endif
