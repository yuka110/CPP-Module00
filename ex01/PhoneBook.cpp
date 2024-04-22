/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/28 16:37:05 by yitoh         #+#    #+#                 */
/*   Updated: 2024/04/22 17:11:40 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
}

PhoneBook::~PhoneBook(){
}

void    PhoneBook::set_cnt(int i)
{
    _cnt = i;
}

//------------------------------------------------------------------------------------------------
// ADD
std::string PhoneBook::_read_var(std::string var)
{
    std::string tmp;
    
    tmp = "\0";
    while (tmp.empty())
    {
        std::cout << CYAN << "Please enter your " << var << ": " << RESET;
        if (!std::getline(std::cin, tmp))
            exit (1);
    }
    return(tmp);
}

int PhoneBook::_check_num(std::string tmp)
{
    for (int i = tmp.size(); i > 0; i--)
    {
        if (!isdigit(tmp[i - 1]))
        {
            std::cout << RED << "Phone number contains invalid character." << RESET << std::endl;
            return (1);
        }
    }
    if (tmp.size() > 15 || tmp.size() < 8)
    {
        std::cout << RED << "Phone number is too short or too long." << RESET << std::endl;
        return (1);
    }
    return (0);
}

std::string PhoneBook::_read_check_var(std::string var)
{
    std::string tmp;
    
    tmp = this->_read_var(var);
    if (var == "phone number")
    {
        while (this->_check_num(tmp))
            tmp = this->_read_var(var);
    }
    return(tmp);
}

void    PhoneBook::add()
{
    int index;
    
    index = this->_cnt;
    if (this->_cnt > MAX_CONTACT - 1)
        index = this->_cnt % MAX_CONTACT;
    this->_contact[index].set_fname(_read_check_var("first name"));
    this->_contact[index].set_lname(_read_check_var("last name"));
    this->_contact[index].set_nname(_read_check_var("nick name"));
    this->_contact[index].set_phone(_read_check_var("phone number"));
    this->_contact[index].set_secret(_read_check_var("biggest secret..."));
    this->_cnt++;
    std::cout << std::endl;
}

//------------------------------------------------------------------------------------------------
// SEARCH

std::string PhoneBook::_trunctuate(std::string name)
{
    if (name.size() < 10)
        return (name);
    if (name.size() >= 10)
        name[9] = '.';
    name.resize(10);
    return (name);
}

void    PhoneBook::_print_contact()
{
    int repeat;
    
    repeat = _cnt;
    if (_cnt > MAX_CONTACT)
        repeat = MAX_CONTACT;
    std::cout <<std::endl << "--------------------------------------------" << std::endl;
    std::cout << BOLD_TEXT << "|     Index|First name| Last name|  Nickname|" << RESET << std::endl;
    std::cout << "--------------------------------------------" << std::endl;
    for (int i = 0; i < repeat; i++)
    {
        std::cout << "|" << std::setw(10) << i;
        std::cout << "|" << std::setw(10) << _trunctuate(this->_contact[i].get_fname());
        std::cout << "|" << std::setw(10) << _trunctuate(this->_contact[i].get_lname());
        std::cout << "|" << std::setw(10) << _trunctuate(this->_contact[i].get_nname());
        std::cout << "|" << std::endl;
    }
    std::cout << "--------------------------------------------" << std::endl << std::endl;
}

void    PhoneBook::_print_details(Contact contact)
{
    std::cout << std::endl <<  MAGENTA << "First name: " << RESET << contact.get_fname() << std::endl;
    std::cout << MAGENTA << "Last name: " << RESET << contact.get_lname() << std::endl;
    std::cout << MAGENTA << "Nickname: " << RESET << contact.get_nname() << std::endl;
    std::cout << MAGENTA << "Phone number: " << RESET << contact.get_phone() << std::endl;
    std::cout << MAGENTA << "Darkest secret: " << RESET << contact.get_secret() << std::endl << std::endl;
}

void    PhoneBook::search()
{
    std::string tmp;
    int index;

    if (_cnt == 0)
    {
        std::cout << BOLD_TEXT << RED << "No contact available. Please add contact first" << RESET << std::endl;
        return ;
    }
    _print_contact();
    while (1)
    {
        std::cout << BOLD_TEXT << "Enter an index for more info: " << RESET;
        if (!std::getline(std::cin, tmp))
            exit (1);
        if (!isdigit((int)tmp[0]))
            std::cout << BOLD_TEXT << RED << "Invalid index" << RESET << std::endl;
        else
        {
            index = stoi(tmp);
            if (index < 0 || index > char(_cnt - 1) || index >= MAX_CONTACT)
                std::cout << BOLD_TEXT << RED << "Invalid index" << RESET << std::endl;
            else
                break ;
        }
    }
    _print_details(_contact[index]);
}