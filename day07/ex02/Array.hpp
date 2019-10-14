/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 16:10:09 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/11 18:28:04 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<typename T>
class Array
{

private:
    
    T *_arr;
    unsigned int _n;

public:

    Array<T>() : _arr(NULL), _n(0) { }
    
    Array<T>(unsigned int n)
    {
        _n = n;
        _arr = new T[n] ();
    }

    Array<T>(Array<T> const &cpy)
    {
        *this = cpy;
    }
	
    Array<T>& operator = (Array<T> const &src)
	{
		delete [] _arr;

		_n = src.size();
        _arr = new T[_n] ();
		for (unsigned int i = 0;i < _n;i++)
            _arr[i] = src._arr[i] ();
        return *this;
	}
    
    ~Array<T>(void)
	{
		delete [] _arr;
	}

    unsigned int	size(void)	const
    {
        return (_n);
    }

    T & operator [] (unsigned int i)
	{
		if (i < _n && i >= 0)
            return (_arr[i]);
        else
			throw std::out_of_range("Error: out of range!!!!");
	}

};
