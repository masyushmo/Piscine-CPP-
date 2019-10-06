/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AProjs.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 02:48:53 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/06 10:11:58 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef APROJ_H
# define APROJ_H

#include "../includes/Objects.hpp"
#include <string>

class AProj : public Objects
{

public:

    AProj();
    AProj(int y, int x);
    AProj(AProj const & cpy);
    ~AProj();

    AProj& operator=(AProj const & src);

    void	update();
    void	draw(void);

};

#endif
