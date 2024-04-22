/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/20 18:45:37 by yitoh         #+#    #+#                 */
/*   Updated: 2024/04/22 14:03:20 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>
#include <string>
#include <cstring>

class Contact{
    private:
        std::string _fname;
        std::string _lname;
        std::string _nname;
        std::string _phone;
        std::string _secret;

    public:
        Contact();
        ~Contact();
        // const std::string    get_name();
        void    set_fname(std::string fname);
        void    set_lname(std::string lname);
        void    set_nname(std::string nname);
        void    set_phone(std::string phone);
        void    set_secret(std::string secret);
        const std::string get_fname();
        const std::string get_lname();
        const std::string get_nname();
        const std::string get_phone();
        const std::string get_secret();

};

#endif