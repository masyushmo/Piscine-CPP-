/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 16:52:14 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/04 20:09:46 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
#include <iostream>

#include "AWeapon.hpp"
#include "Enemy.hpp"


class Character
{
private:

	std::string	_name;
	int			_ap;
	AWeapon		*_weapon;

public:

	Character(void);
	Character(std::string const & name);
	Character(const Character &cpy);
	~Character(void);

	Character&	operator = (const Character &src);

    void				recoverAP(void);
	void				equip(AWeapon*);
	void				attack(Enemy*);

    std::string const &	getName(void)		const;
	int					getAp(void)			const;
	AWeapon				*getWeapon(void)	const;
};

std::ostream &operator << (std::ostream &of, Character const &don);

#endif