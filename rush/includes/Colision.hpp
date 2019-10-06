/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Colision.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 04:16:38 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/06 08:37:02 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLISION_H
# define COLISION_H

class Colision
{

protected:

    int _n;
    int _x;
    int _y;
    bool _isdead;

public:

    Colision();
    Colision(Colision const & obj);
    virtual ~Colision(void);

    Colision& operator=(Colision const &rhs);

    virtual void update(void);
    virtual void draw(void) = 0;
    virtual bool check_hit(Colision &entity) = 0;

    void setPosition(int y, int x);

    int Dead(void);

    int getY(void) const;
    int getX(void) const;
    void setY(int y);
    void setX(int x);

    int check_hits(Colision &entity);

};

#endif