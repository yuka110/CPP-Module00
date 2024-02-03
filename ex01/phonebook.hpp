/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/28 16:37:09 by yitoh         #+#    #+#                 */
/*   Updated: 2024/02/03 15:14:04 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H_
#define _PHONEBOOK_H_

#include <iostream>
#include <string>
#include <cstring>

class PhoneBook{
    private:
        class Contact[8];
    public:
        void    add(Contact data);
        void    search(Contact data);
        void    exit(Contact data);
};

class Contact{
    private:
        std::string _fname;
        std::string _lname;
        std::string _nick;
        std::string _secret;
        int         _phone;
    public:
        Contact(void); //constructor
        ~Contact(void); //deconstructor
        void    get_name();

}

#endif
