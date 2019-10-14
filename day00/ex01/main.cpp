// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mmasyush <mmasyush@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/09/30 16:37:34 by mmasyush          #+#    #+#             //
//   Updated: 2019/09/30 16:37:35 by mmasyush         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ClassContacts.hpp"
#include <iostream>
#include <iomanip>
#include <string>

Contact add_contact()
{
    Contact temp;
    std::string buff;

    std::cout << "\033[0;32mGive me your first name!\033[0;37m(ง ͡° ͜ʖ ͡°)=/̵͇̿̿/'̿'̿\n";
    std::getline(std::cin, buff);
    temp.in_first_name(buff);
    std::cout << "\033[0;32mGive me your last name!\033[0;37m(ง ͡° ͜ʖ ͡°)=/̵͇̿̿/'̿'̿\n";
    std::getline(std::cin, buff);
    temp.in_last_name(buff);
    std::cout << "\033[0;32mGive me your nickname!\033[0;37m(ง ͡° ͜ʖ ͡°)=/̵͇̿̿/'̿'̿\n";
    std::getline(std::cin, buff);
    temp.in_nickname(buff);
    std::cout << "\033[0;32mGive me your login!\033[0;37m(ง ͡° ͜ʖ ͡°)=/̵͇̿̿/'̿'̿\n";
    std::getline(std::cin, buff);
    temp.in_login(buff);
    std::cout << "\033[0;32mGive me your postal address, please!\033[0;37m(ง ͡° ͜ʖ ͡°)=/̵͇̿̿/'̿'̿\n";
    std::getline(std::cin, buff);
    temp.in_addres(buff);
    std::cout << "\033[0;32mGive me your email address!\033[0;37m(ง ͡° ͜ʖ ͡°)=/̵͇̿̿/'̿'̿\n";
    std::getline(std::cin, buff);
    temp.in_email(buff);
    std::cout << "\033[0;32mGive me your phone number!\033[0;37m(ง ͡° ͜ʖ ͡°)=/̵͇̿̿/'̿'̿\n";
    std::getline(std::cin, buff);
    temp.in_phone(buff);
    std::cout << "\033[0;32mGive me your birthday date!\033[0;37m(ง ͡° ͜ʖ ͡°)=/̵͇̿̿/'̿'̿\n";
    std::getline(std::cin, buff);
    temp.in_birthday(buff);
    std::cout << "\033[0;32mShare with me what your favorite meal\033[0;37m(˵ ͡° ͜ʖ ͡°˵)\n";
    std::getline(std::cin, buff);
    temp.in_favorite_meal(buff);
    std::cout << "\033[0;32mShare with me what your underwear color\033[0;37m(˵ ͡° ͜ʖ ͡°˵)\n";
    std::getline(std::cin, buff);
    temp.in_underwear(buff);
    std::cout << "\033[0;32mShare with me what your darkest secret\033[0;37m(˵ ͡° ͜ʖ ͡°˵)\n";
    std::getline(std::cin, buff);
    temp.in_secret(buff);
    std::cout << "\033[0;32m\\(^o^)/\033[0;37mThanks, we are done here!!!\033[0;32m\\(^o^)/\033[0;37m\n";
    return(temp);
}

void get_contacts(Contact *list, int num)
{
    std::string fname;
    std::string lname;
    std::string nick;
    std::string str;
    char input;

    for (int i = 0; i < num; i++)
    {
        fname = list[i].out_first_name();
        lname = list[i].out_last_name();
        nick = list[i].out_nickname();
        if (fname.length() > 9)
        {
            fname.resize (9);
            fname.append(".");
        }
        if (fname.length() > 9)
        {
            lname.resize (9);
            lname.append(".");
        }
        if (fname.length() > 9)
        {
            nick.resize (9);
            nick.append(".");
        }
        std::cout << "|" << std::setw(10) << i << "|" << std::setw(10) << fname << "|" << std::setw(10) << lname << "|" << std::setw(10) << nick << "|" << std::endl;
    }
    std::cout << "to more information please enter index number\n";
    std::getline(std::cin, str);
    if(str.length() != 1)
         std::cout << "BAD INDEX\n";
    else
        input = str[0];
    if (input >= '0' && input <= '8' && input - 48 < num)
    {
        std::cout << list[input - 48].out_first_name() << std::endl;
        std::cout << list[input - 48].out_last_name() << std::endl;
        std::cout << list[input - 48].out_nickname() << std::endl;
        std::cout << list[input - 48].out_login() << std::endl;
        std::cout << list[input - 48].out_addres() << std::endl;
        std::cout << list[input - 48].out_email() << std::endl;
        std::cout << list[input - 48].out_phone() << std::endl;
        std::cout << list[input - 48].out_birthday() << std::endl;
        std::cout << list[input - 48].out_favorite_meal() << std::endl;
        std::cout << list[input - 48].out_underwear() << std::endl;
        std::cout << list[input - 48].out_secret() << std::endl;
    }
    else
        std::cout << "BAD INDEX\n";
}

int main(int argc, char *argv[])
{
    Contact list[MAX_CONT];
    int num = 0;
    std::string str;

    if (argc == 1)
    {
        while(1)
        {
            std::getline(std::cin, str);
            if (str == "EXIT")
                break;
            else if (str == "ADD")
            {
                if (num < MAX_CONT)
                    list[num++] = add_contact();
                else
                    std::cout << ERROR << "there is too many contacts, sorry!\n";
            }
            else if (str == "SEARCH")
            {
                if (num > 0)
                    get_contacts(list, num);
                else
                    std::cout << ERROR << "there is no contacts, sorry!\n";
            }
            else
                std::cout << ERROR << "bad command! you can use any of this: \"ADD\" , \"SEARCH\", \"EXIT\"\n";            
        }
    }
    return (0);
}