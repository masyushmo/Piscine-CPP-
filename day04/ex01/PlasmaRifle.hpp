/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 16:50:38 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/04 18:40:21 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_H
# define PLASMARIFLE_H

#include "AWeapon.hpp"

class	PlasmaRifle : public AWeapon
{

public:

	PlasmaRifle();
	PlasmaRifle(const PlasmaRifle &cpy);
	virtual ~PlasmaRifle();

	PlasmaRifle&	operator = (const PlasmaRifle &src);

	void	attack() const;
};

#endif