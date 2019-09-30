// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   megaphone.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mmasyush <mmasyush@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/09/30 12:14:34 by mmasyush          #+#    #+#             //
//   Updated: 2019/09/30 12:14:34 by mmasyush         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>

int main(int argc, char *argv[])
{
    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
    }
    else
    {
        for (int i = 1; i < argc; i++)
        {
            for (int c = 0; c < (int)strlen(argv[i]); c++)
            {
                if (argv[i][c] >= 'a' && argv[i][c] <= 'z')
                    argv[i][c] -= 32;
            }
            std::cout << argv[i];
        }
        std::cout << "\n";
    }
    return (0);
}