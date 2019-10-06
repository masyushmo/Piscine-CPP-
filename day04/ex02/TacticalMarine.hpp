/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 20:18:47 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/04 20:38:38 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_H
# define TACTICALMARINE_H

#include "ISpaceMarine.hpp"

class	TacticalMarine : public ISpaceMarine
{

public:

	TacticalMarine(void);
	TacticalMarine(const TacticalMarine &cpy);
	virtual ~TacticalMarine(void);

	TacticalMarine&	operator = (const TacticalMarine &src);

	ISpaceMarine*	clone(void)			const;
	void			battleCry(void)		const;
	void			rangedAttack(void)	const;
	void			meleeAttack(void)	const;
};

#endif
