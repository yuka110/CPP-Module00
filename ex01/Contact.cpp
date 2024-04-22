/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/20 19:00:22 by yitoh         #+#    #+#                 */
/*   Updated: 2024/04/22 16:25:19 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(){
}

Contact::~Contact(){
}

void    Contact::set_fname(std::string fname)
{
    _fname = fname;
}

void    Contact::set_lname(std::string lname)
{
    _lname = lname;
}

void    Contact::set_nname(std::string nname)
{
    _nname = nname;
}

void    Contact::set_phone(std::string phone)
{
    _phone = phone;
}

void    Contact::set_secret(std::string secret)
{
    _secret = secret;
}

const std::string Contact::get_fname()
{
    return (_fname);
}

const std::string Contact::get_lname()
{
    return (_lname);
}

const std::string Contact::get_nname()
{
    return (_nname);
}

const std::string Contact::get_phone()
{
    return (_phone);
}

const std::string Contact::get_secret()
{
    return (_secret);
}
