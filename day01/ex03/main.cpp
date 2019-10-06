/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 09:27:25 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/02 14:06:38 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"
#include <iostream>
#include <string>

int main(void)
{
	std::cout << "Creating zombies with use power of Heap!" << std::endl;
	ZombieHorde A_loot_of_zombies(20);
	std::cout << std::endl;
    
	std::cout << "Creating zombie with use power of Stack!" << std::endl;
	Zombie	Petro("Petya", "Pivovar");
	std::cout << std::endl;
    
	return (0);
}