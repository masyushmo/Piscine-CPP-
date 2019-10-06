/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/05 12:24:17 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/05 14:18:11 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class	MateriaSource : public IMateriaSource
{

private:

    AMateria*	_invtry[4];

public:
	
    MateriaSource(void);
	MateriaSource(const MateriaSource&cpy);
	virtual ~MateriaSource(void);
	MateriaSource&	operator = (const MateriaSource &old);

	void		learnMateria(AMateria* m);
	AMateria*	createMateria(std::string const & type);
};

#endif