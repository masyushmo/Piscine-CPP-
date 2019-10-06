/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 12:12:23 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/04 13:55:43 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "FragTrap.hpp"


FragTrap::FragTrap() {}

FragTrap::FragTrap(std::string const name) : _name(name), _hp(100), _energy(100)
                                            , _lvl(1), _melleDMG(30), _rangeDMG(20), _armor(5)
{
    srand(time(NULL));
    std::cout << this->_name << " is ready to fly!" << std::endl;
    return;
}

FragTrap::FragTrap(FragTrap const & src)
{
    *this = src;
    return;
}

FragTrap::~FragTrap()
{
    std::cout << this->_name << " DEad" << std::endl;
    return;
}

FragTrap& FragTrap::operator = (const FragTrap &prev)
{
	_name = prev.getName();
	_hp = prev.getHp();
	_energy = prev.getEnery();
	_lvl = prev.getLvl();
	std::cout << this->_name << " is ready to fly! AGAIN" << std::endl;
	return (*this);
}

std::string	FragTrap::getName(void) const { return this->_name;}

int			FragTrap::getHp(void) const { return this->_hp;}

int			FragTrap::getEnery(void) const { return this->_energy;}

int			FragTrap::getLvl(void) const { return this->_lvl;}

void FragTrap::rangedAttack(std::string const & target)
{
    std::cout << "FR4G-TP " << this->_name << " attacks " << target <<  " at range, causing " << this->_rangeDMG <<  " points of damage !" << std::endl;
}

void FragTrap::meleeAttack(std::string const & target)
{
    std::cout << "FR4G-TP " << this->_name << " attacks " << target <<  " with sword, causing " << this->_melleDMG <<  " points of damage !" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
    amount -= _armor;
    if (_hp - (int)amount < 0)
        amount = _hp;
    _hp -= amount;
    if (_hp)
    std::cout << "FR4G-TP " << this->_name << " take " << amount <<  " damage " << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
    if (_hp + (int)amount > 100)
        amount = 100 - _hp;
	_hp += amount;
    std::cout << "FR4G-TP " << this->_name << " restore " << amount <<  " hp " << std::endl;
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
    static const int to_Chose = 5;

    std::string attcs[] = { "surekin", "fist", "sumon kraken", "suicide", "throw brick"};

	if (_energy >= 25)
	{
		_energy -= 25;
        std::cout << "perfirme special attcs" <<  attcs[rand() % to_Chose] << " on " << target << std::endl;
	}
	else
          std::cout << "u are weak"<< std::endl;
}