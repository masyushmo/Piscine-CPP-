/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 19:49:11 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/10 20:34:31 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <iostream>
#include "Base.hpp"

int main()
{
    srand(static_cast<int>(time(NULL)));

    Base *base = new Base;
     Base *rand1 = base->generate();
      Base *rand2 = base->generate();
       Base *rand3 = base->generate();
        Base *rand4 = base->generate();
         Base *rand5 = base->generate();

	base->identify_from_pointer(rand1);
    base->identify_from_pointer(rand2);
    base->identify_from_pointer(rand3);
    base->identify_from_pointer(rand4);
    base->identify_from_pointer(rand5);

    std::cout << std::endl;

    base->Base::identify_from_reference(*rand1);
    base->Base::identify_from_reference(*rand2);
    base->Base::identify_from_reference(*rand3);
    base->Base::identify_from_reference(*rand4);
    base->Base::identify_from_reference(*rand5);
    return 0;
}