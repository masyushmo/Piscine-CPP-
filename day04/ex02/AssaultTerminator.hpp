/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 20:19:00 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/04 20:44:48 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_H
# define ASSAULTTERMINATOR_H

#include "ISpaceMarine.hpp"

class	AssaultTerminator : public ISpaceMarine
{

public:
	
    AssaultTerminator(void);
	AssaultTerminator(const AssaultTerminator &cpy);
	virtual ~AssaultTerminator(void);
	AssaultTerminator&	operator = (const AssaultTerminator &src);

	ISpaceMarine*	clone(void)			const;
	void			battleCry(void)		const;
	void			rangedAttack(void)	const;
	void			meleeAttack(void)	const;
};

#endif