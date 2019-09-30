// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClassContacts.hpp                                  :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mmasyush <mmasyush@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/09/30 17:43:42 by mmasyush          #+#    #+#             //
//   Updated: 2019/09/30 17:43:42 by mmasyush         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef CLASS_CONTACTS_H
# define CLASS_CONTACTS_H

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>

# define MAX_CONT 8
# define ERROR "\033[0;31mERROR: \033[0;37m" 

class Contact {

    std::string fname;
    std::string lname;
    std::string nick;
    std::string login;
    std::string addres;
    std::string email;
    std::string phone;
    std::string birthday;
    std::string meal;
    std::string underwear;
    std::string secret;

public:
    Contact(void);
    ~Contact(void);
    void    in_first_name(std::string);
    void    in_last_name(std::string);
    void    in_nickname(std::string);
    void    in_login(std::string);
    void    in_addres(std::string);
    void    in_email(std::string);
    void    in_phone(std::string);
    void    in_birthday(std::string);
    void    in_favorite_meal(std::string);
    void    in_underwear(std::string);
    void    in_secret(std::string);
    std::string    out_first_name(void);
    std::string    out_last_name(void);
    std::string    out_nickname(void);
    std::string    out_login(void);
    std::string    out_addres(void);
    std::string    out_email(void);
    std::string    out_phone(void);
    std::string    out_birthday(void);
    std::string    out_favorite_meal(void);
    std::string    out_underwear(void);
    std::string    out_secret(void);
};

#endif