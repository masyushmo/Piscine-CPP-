/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 02:50:16 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/06 10:56:40 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLAYER_H
# define PLAYER_H

#include "../includes/Objects.hpp"
#include <string>

class Player : virtual public Objects
{

private:

    int _score;

public:

    Player(void);
    Player(Player const & obj);
    ~Player(void);

    Player& operator=(Player const &);

    void	update(void);
    void	draw(void);
    int     getScore();
    void    setScore(int s);

};

#endif
