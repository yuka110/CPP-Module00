/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/28 16:37:09 by yitoh         #+#    #+#                 */
/*   Updated: 2024/04/22 17:11:30 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#define BOLD_TEXT "\033[1m"
#define RESET "\033[0m"

#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define WHITE "\033[37m"

#define MAX_CONTACT 8

#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook{
    private:
        Contact _contact[MAX_CONTACT];
        int _cnt;
    
        std::string _read_var(std::string var);
        std::string _read_check_var(std::string var);
        int _check_num(std::string tmp);
        void    _print_contact();
        void    _print_details(Contact contact);
        std::string _trunctuate(std::string s);

    public:
        PhoneBook();
        ~PhoneBook();
        void    add();
        void    search();
        void    set_cnt(int i);
};

#endif
