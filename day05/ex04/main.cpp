/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 16:27:41 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/09 19:10:25 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "OfficeBlock.hpp"

int	main()
{
	try
	{
		Intern intern;

		Bureaucrat maks = Bureaucrat("Maks", 150);
		Bureaucrat lebovsky = Bureaucrat("Dude", 137);

		OfficeBlock offb;

		offb.setExecutor(lebovsky);
		offb.setSigner(maks);
		offb.setIntern(intern);

		offb.doBureaucracy("Robotomy", "Epic");
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}
