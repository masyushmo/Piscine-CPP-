/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 14:00:32 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/04 18:34:16 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_H
# define PEON_H

#include "Victim.hpp"
#include <string>

class	Peon : public Victim
{

public:

	Peon();
	Peon(std::string name);
	Peon(const Peon &cpy);
	virtual ~Peon();

	Peon&	operator = (const Peon &src);
	
	std::string	getName(void)	const;

	void	getPolymorphed() const;
};

#endif