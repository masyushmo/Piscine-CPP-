/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Game.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 02:49:20 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/06 08:38:21 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAME_H
# define GAME_H

# include <cstddef>

class Game
{

private:

    int _x;
    int _y;

public:
    
    Game();
    Game(Game const &);
    ~Game();

    Game& operator=(Game const &);

    void setWin(int y, int x);
    int getX();
    int getY();
    void gameInit();
};

Game* getGame(Game *c = NULL);

#endif