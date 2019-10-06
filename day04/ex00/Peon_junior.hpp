/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon_junior.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 16:25:10 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/04 18:34:09 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_JUNOIR_H
# define PEON_JUNOIR_H

#include "Peon.hpp"
#include <string>

class	Peon_junior : public Peon
{

public:

	Peon_junior();
	Peon_junior(std::string name);
	Peon_junior(const Peon_junior &cpy);
	virtual ~Peon_junior();

	Peon_junior&	operator = (const Peon_junior &src);

	std::string	getName(void)	const;

	void	getPolymorphed() const;
};

#endif