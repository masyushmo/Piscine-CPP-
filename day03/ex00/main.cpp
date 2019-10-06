/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 13:11:02 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/04 13:51:07 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int		main()
{
	FragTrap ft = FragTrap("D3TH-TP");

	ft.rangedAttack("Jack");
	ft.meleeAttack("Wilhelm");
	
	ft.takeDamage(42);
	ft.takeDamage(42);
	ft.takeDamage(42);
	ft.beRepaired(1);
	ft.beRepaired(500);

	ft.vaulthunter_dot_exe("Axton");
	ft.vaulthunter_dot_exe("Gaige");
	ft.vaulthunter_dot_exe("Zer0");
	ft.vaulthunter_dot_exe("Maya");
	ft.vaulthunter_dot_exe("Tina");

	ft.takeDamage(24);
	FragTrap ff = ft;
	std::cout << ff.getName() << std::endl;
	std::cout << ff.getHp() << std::endl;
	std::cout << ff.getEnery() << std::endl;

	return (0);
}