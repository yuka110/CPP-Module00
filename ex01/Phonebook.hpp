/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Phonebook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/28 16:37:09 by yitoh         #+#    #+#                 */
/*   Updated: 2024/04/20 19:00:10 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H_
# define _PHONEBOOK_H_

#include <iostream>
#include <string>
#include <cstring>
#include "Contact.hpp"

class PhoneBook{
    private:
        class Contact[8];

    public:
        PhoneBook();
        ~PhoneBook();
        void    add();
        void    search();
        void    exit();
};

#endif
