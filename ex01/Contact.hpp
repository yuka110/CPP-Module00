/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/20 18:45:37 by yitoh         #+#    #+#                 */
/*   Updated: 2024/04/20 19:03:52 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H_
# define _CONTACT_H_

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
        const std::string    get_name();
        void    set_name(std::string _name, std::string name);

};

#endif