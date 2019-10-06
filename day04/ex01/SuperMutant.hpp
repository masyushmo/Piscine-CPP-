/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 16:51:36 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/04 19:38:59 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPER_MUTANT_H
# define SUPER_MUTANT_H

#include "Enemy.hpp"

class SuperMutant : public Enemy
{

public:
    
    SuperMutant();
    SuperMutant(const SuperMutant &cpy);
    virtual ~SuperMutant();

    SuperMutant&	operator = (const SuperMutant &src);
    
    void takeDamage(int);
};

#endif
