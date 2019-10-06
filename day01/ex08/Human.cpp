/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 19:37:40 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/02 21:09:43 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Human.hpp"

void Human::meleeAttack(std::string const & target)
{
    std::cout << "Massive damage given by knife to: " << target << std::endl;
}

void Human::rangedAttack(std::string const & target)
{
    std::cout << "Massive damage given by Bow to: " << target << std::endl;
}

void Human::intimidatingShout(std::string const & target)
{
    std::cout << "Wult!-Nah!-Kast!! on the: " << target << std::endl;
}

void Human::action(std::string const & action_name, std::string const & target)
 {
    void (Human::*p[3])(std::string const & target) = {&Human::meleeAttack, &Human::rangedAttack,&Human::intimidatingShout};
    char inp = action_name[0];
    int i = 0;
    char j = 109;
    while (i < 3 && j <= 119)
    {
        if (inp == j)
        {
            (this->*p[i])(target);
            break;
        }
        i++;
        j += 5;
    }
    return;
}