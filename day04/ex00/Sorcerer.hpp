/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 14:00:05 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/04 18:34:19 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_H
# define SORCERER_H

#include <string>
#include "Peon.hpp"

class Sorcerer
{

private:

    std::string _name;
    std::string _title;


public:

    Sorcerer();
    Sorcerer(std::string name, std::string title);
    Sorcerer(const Sorcerer &cpy);
    virtual ~Sorcerer();

    Sorcerer&	operator = (const Sorcerer &src);

    std::string	getName(void)	const;
	std::string	getTitle(void)	const;
    void polymorph(Victim const &pol) const;
};

std::ostream    &operator<<(std::ostream &of, Sorcerer const &don);

#endif