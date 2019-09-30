// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClassContacts.cpp                                  :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mmasyush <mmasyush@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/09/30 17:43:48 by mmasyush          #+#    #+#             //
//   Updated: 2019/09/30 17:43:48 by mmasyush         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ClassContacts.hpp"

Contact::Contact(void)
{
    return;
}
Contact::~Contact(void)
{
    return;
}
void    Contact::in_first_name(std::string str)
{
    this->fname = str;
    return;
};
void    Contact::in_last_name(std::string str)
{
    this->lname = str;
    return;
};
void    Contact::in_nickname(std::string str)
{
    this->nick = str;
    return;
};
void    Contact::in_login(std::string str)
{
    this->login = str;
    return;
};
void    Contact::in_addres(std::string str)
{
    this->addres = str;
    return;
};
void    Contact::in_email(std::string str)
{
    this->email = str;
    return;
};
void    Contact::in_phone(std::string str)
{
    this->phone = str;
    return;
};
void    Contact::in_birthday(std::string str)
{
    this->birthday = str;
    return;
};
void    Contact::in_favorite_meal(std::string str)
{
    this->meal = str;
    return;
};
void    Contact::in_underwear(std::string str)
{
    this->underwear = str;
    return;
};
void    Contact::in_secret(std::string str)
{
    this->secret = str;
    return;
};
std::string    Contact::out_first_name(void)
{
    return(this->fname);
};
std::string    Contact::out_last_name(void)
{
    return(this->lname);
};
std::string    Contact::out_nickname(void)
{
    return(this->nick);
};
std::string    Contact::out_login(void)
{
    return(this->login);
};
std::string    Contact::out_addres(void)
{
    return(this->addres);
};
std::string    Contact::out_email(void)
{
    return(this->email);
};
std::string    Contact::out_phone(void)
{
    return(this->phone);
};
std::string    Contact::out_birthday(void)
{
    return(this->birthday);
};
std::string    Contact::out_favorite_meal(void)
{
    return(this->meal);
};
std::string    Contact::out_underwear(void)
{
    return(this->underwear);
};
std::string    Contact::out_secret(void)
{
    return(this->secret);
};