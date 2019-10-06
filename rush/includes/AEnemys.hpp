/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AEnemys.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 02:48:39 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/06 10:43:30 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AENEMY_H
# define AENEMY_H

# include "../includes/Objects.hpp"

class AEnemy : public Objects
{

private:

    int     _type;
    int		_speed;
    // int     _hp;

public:
    
    AEnemy();
    AEnemy(AEnemy const & cpy);
    ~AEnemy(void);

    AEnemy& operator=(AEnemy const & src);

    char	getType(void);
    void	update(void);
    void	draw(void);

};

#endif