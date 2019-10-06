/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 16:51:04 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/05 19:38:35 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_H
# define POWERFIST_H

#include "AWeapon.hpp"

class	PowerFist : public AWeapon
{

public:

	PowerFist();
	PowerFist(const PowerFist &cpy);
	virtual ~PowerFist();

	PowerFist&	operator = (const PowerFist &src);

	void	attack() const;
};

#endif