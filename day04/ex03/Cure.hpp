/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/05 12:23:48 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/05 13:35:10 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
# define CURE_H

#include "AMateria.hpp"
#include "ICharacter.hpp"

class	Cure : public AMateria
{

public:
	
    Cure();
	Cure(const Cure &cpy);
	virtual ~Cure();
	
    Cure&	operator = (const Cure &src);

	AMateria		*clone(void)	const;
	void	use(ICharacter & target);

};

#endif