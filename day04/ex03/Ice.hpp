/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/05 12:23:24 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/05 13:35:15 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
# define ICE_H

#include "AMateria.hpp"
#include "ICharacter.hpp"

class	Ice : public AMateria
{

public:
	
    Ice();
	Ice(const Ice &cpy);
	virtual ~Ice();
	
    Ice&	operator = (const Ice &src);

	AMateria		*clone(void)	const;
	void	use(ICharacter & target);

};

#endif
