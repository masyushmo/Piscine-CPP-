/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/05 12:22:55 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/05 15:27:27 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
# define AMATERIA_H

#include <iostream>

class ICharacter;

class AMateria
{

private:

    std::string type_;
    unsigned int xp_;
    
public:

    AMateria();
    AMateria(std::string const & type);
    AMateria(const AMateria &cpy);
    virtual ~AMateria();

    AMateria & operator=(const AMateria &src);

    std::string const & getType() const; //Returns the materia type
    unsigned int getXP() const; //Returns the Materia's XP
    void setXp(unsigned int xp);

    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);

};

#endif