/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AFly.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 02:56:28 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/06 09:25:07 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFLY_HPP
# define AFLY_HPP

# include "../includes/Objects.hpp"

class AFly
{

private:
    
    Objects	**_squad;
    int	_size;
    int	_n;
    int	_last;

public:
    
    AFly();
    AFly(AFly const &);
    ~AFly();

    AFly& operator=(AFly const &);

    Objects **getArray() const;
    int getSize() const;
    int getLast() const;
    int getCount() const;
    void add(Objects *entity);
    void remove(int i);

};

#endif