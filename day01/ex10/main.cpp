/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 21:12:05 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/02 21:18:44 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int ft_error (int i)
{
    if (i ==  1)
    {
        std::cout << "\033[0;31mError:\033[0;37m bad input" << std::endl;
        std::cout << "Usage: ./a.out cat {filename}" << std::endl;
    }
    else if (i == 2)
        std::cout << "\033[0;31mError:\033[0;37m can't create file" << std::endl;
    return (1);
}

int main(int argc, char *argv[])
{
    if (argc == 3)
    {
        std::string cat = argv[1];
        std::string file = argv[2];
        if ((cat.compare("cat") != 0) || file.empty())
            return(ft_error(1));
        std::ifstream ifs(file);
        if(!ifs)
           return(ft_error(2));
           
        std::string file_buff;
        std::getline(ifs, file_buff, '\0');
        
        std::cout << file_buff;
         ifs.close();
    }
    else
        return(ft_error(1));
    return(0);
}