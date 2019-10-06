/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Objects.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 08:31:44 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/06 11:30:18 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OBJECTS_H
# define OBJECTS_H

#include <iostream>

class Objects
{

protected:

    int _n;
    int _x;
    int _y;
    int _Widht;
    int _Heigh;
    std::string _type;

public:

    Objects();
    Objects(Objects const & obj);
    //  Objects(Objects const & obj);
    virtual ~Objects(void);

    Objects& operator=(Objects const &rhs);

    virtual void update();
    virtual void draw(void) = 0;

    void setPosition(int y, int x);

    int getW(void) const;
    int getH(void) const;
    int getY(void) const;
    int getX(void) const;
    void setY(int y);
    void setX(int x);
    void setW(int y);
    void setH(int x);
    std::string getType(void) const;
    void setType(std::string str);
};

#endif