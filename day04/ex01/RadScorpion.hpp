/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 16:51:53 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/04 20:04:52 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RAD_SCORPION_H
# define RAD_SCORPION_H

#include "Enemy.hpp"

class   RadScorpion : public Enemy
{

public:
    
    RadScorpion();
    RadScorpion(const RadScorpion &cpy);
    virtual ~RadScorpion();

    RadScorpion&	operator = (const RadScorpion &src);
    
};

#endif