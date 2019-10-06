/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 11:33:04 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/02 11:45:51 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *p = &str;
    std::string &r = str;

    std::cout << "str says:" << std::endl; 
    std::cout << str << std::endl;
    std::cout << "ptr says:" << std::endl;  
    std::cout << *p << std::endl;
    std::cout << "ref says:" << std::endl; 
    std::cout << r << std::endl; 
    
    return(0);
}