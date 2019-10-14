/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 15:18:39 by mmasyush          #+#    #+#             */
/*   Updated: 2019/10/11 16:05:40 by mmasyush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<typename T>
void increm(T & x)
{
    ++x;
    std::cout << x << std::endl;
}

template<typename T>
void iter(T *arr, int length, void (*foo)(T & x))
{
    for (int i = 0; i < length; i++)
        (*foo)(arr[i]);
}

int	main()
{
    {
        int arri[5] = {1, 2, 3, 4, 5};

        iter(arri, 5, &increm);
        std::cout << std::endl;
        
        char arrc[5] = {'a', 'b', 'c', 'd', 42};

        iter(arrc, 5, &increm);
        std::cout << std::endl;
    }

    class Test
    {
        public:
            Test(float a, float b, float c, float d)
            {
                _arrf[0] = a;
                _arrf[1] = b;
                _arrf[2] = c;
                _arrf[3] = d;
            }

            float _arrf[5];
    };

    Test * a = new Test(41.9, -21.1, 0, 4.20);
    iter(a->_arrf, 4, &increm);
    std::cout << std::endl;




    // std::string arrs[5] = {"mama", "mia", "das", "me", "MArio"};
    // iter(arrs, 5, &increm);
    // std::cout << std::endl;

	return (0);
}