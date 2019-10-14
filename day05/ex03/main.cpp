/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 16:27:41 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/09 17:40:52 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int	main()
{
	Intern intern;

	Form* frobot;
	Form* fshrubbery;
	Form* fpresidential;
	Form* fbad;
	
    frobot = intern.makeForm("Robotomy", "Arny");
    fpresidential = intern.makeForm("Presidential", "filex");
    fshrubbery = intern.makeForm("Shrubbery", "Soyboy");
    fbad = intern.makeForm("whaaaat", "nowaythisiswork");

	return (0);
}
