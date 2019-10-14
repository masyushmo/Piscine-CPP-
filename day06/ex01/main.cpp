/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 18:24:39 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/10 20:16:20 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <ctime>
#include "data.hpp"

Data	*deserialize(void *raw)
{
	return (reinterpret_cast<Data*>(raw));
}

void	*serialize(void)
{
    srand(static_cast<int>(time(NULL)));
	Data *temp = new Data;
	char str1[9];
	char str2[9];
    static const char alphanum[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	
    for (int i = 0;i < 8;i++)
		str1[i] = alphanum[rand() % 61];
	str1[8] = '\0';
	temp->n = rand() + INT_MIN /2 ;
    for (int i = 0;i < 8;i++)
		str2[i] = alphanum[rand() % 61];
	str1[8] = '\0';
    temp->s1 += str1;
    temp->s2 += str2;

	return (static_cast<void*>(temp));
}

int main()
{
	void *voidata;
	Data *data;

	voidata = serialize();
	data = deserialize(voidata);

	std::cout << "	s1: " << data->s1;
	std::cout << "	n: " << data->n;
	std::cout << "	s2: " << data->s2 << std::endl;

    return 0;
}
