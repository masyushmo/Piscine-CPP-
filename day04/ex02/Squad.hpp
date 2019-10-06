/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 20:18:32 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/06 01:31:33 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_H
# define SQUAD_H

#include "ISquad.hpp"

class	Squad : public ISquad
{
    typedef struct		s_marines
    {
	    ISpaceMarine	*marine;
	    s_marines		*next;
    }					t_marines;

private:
	
    int			_count;
	t_marines	*_marines;

public:
	
    Squad(void);
	Squad(const Squad &cpy);
	virtual ~Squad(void);
	
    Squad&	operator = (const Squad &src);

	int				getCount(void)	const;
	ISpaceMarine*	getUnit(int)	const;
	int				push(ISpaceMarine*);
};

#endif
