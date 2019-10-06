/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 14:00:18 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/04 18:34:21 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_H
# define VICTIM_H

#include <string>

class Victim
{

protected:

    std::string _name;

public:

    Victim();
    Victim(std::string name);
    Victim(const Victim &cpy);
    virtual ~Victim();

    Victim&	operator = (const Victim &src);

    std::string	getName(void)	const;
    virtual void getPolymorphed() const; 
};

std::ostream&	operator<<(std::ostream &of, Victim const &don);

#endif