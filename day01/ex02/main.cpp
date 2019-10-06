/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 20:28:41 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/02 14:08:02 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <iostream>
#include <string>

int main(void)
{
	srand(time(NULL));
	std::cout << "Creating zombie with use power of Stack!" << std::endl;
	Zombie	Misha("Misha", "Student");
	std::cout << std::endl;

	std::cout << "Creating ZombieEvent with use power of Heap!" << std::endl;
	ZombieEvent	*Me = new ZombieEvent("Maxim", "Genius-Billionaire-Playboy-Philanthropist");
	std::cout << std::endl;

    std::cout << "Calling setZombieType()" << std::endl;
	Me->setZombieType("Iron man");
	std::cout << std::endl;
	
	delete Me;
	std::cout << std::endl;
        
    std::cout << "Creating ZombieEvent with use power of Heap!" << std::endl;
	ZombieEvent	*Donald =  new ZombieEvent("Donald", "Trump");
	std::cout << std::endl;

	std::cout << "Calling newZombie()" << std::endl;
	delete Donald->newZombie("Lonald");
	std::cout  << std::endl;

	std::cout <<"Calling randomChump()" << std::endl;
	delete Donald->randomChump(); 
	std::cout << std::endl;
    
    delete Donald;
	return (0);
}