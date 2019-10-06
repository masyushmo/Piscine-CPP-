/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/05 12:24:04 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/05 15:16:16 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{

private:

    std::string _name;
	AMateria* _invtry[4];

public:

    Character();
	Character(std::string const &name);
	Character(const Character &cpy);
	virtual ~Character();

	Character&	operator = (const Character &src);

	std::string const &	getName(void)	const;
	void    equip(AMateria* m);
	void    unequip(int idx);
	void    use(int idx, ICharacter& target);

};

#endif