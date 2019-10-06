/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 17:13:58 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/02 19:30:47 by mmasyush         ###   ########.fr       */
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
        std::cout << "Usage: ./a.out {filename} {string to find} {replacer}" << std::endl;
    }
    else if (i == 2)
        std::cout << "\033[0;31mError:\033[0;37m can't create file" << std::endl;
    return (1);
}

int main(int argc, char *argv[])
{
    if (argc == 4)
    {
        std::string file = argv[1];
        std::string s1 = argv[2];
        std::string s2 = argv[3];
        std::cout << file << std::endl << std::endl;

        if (s1.empty() || s2.empty() || file.empty() || s1 == s2)
            return(ft_error(1));
        std::ifstream ifs(file);
        if(!ifs)
           return(ft_error(2));
           
        std::ofstream ofs(file + ".replace");
        std::string file_buff;
        std::getline(ifs, file_buff, '\0');
        while (file_buff.find(s1) != std::string::npos)
            file_buff.replace(file_buff.find(s1), s1.length(), s2);
        ofs << file_buff;

        ofs.close();
        ifs.close();
    }
    else
        return(ft_error(1));
    return(0);
}