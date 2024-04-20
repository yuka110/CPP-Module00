/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Phonebook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/28 16:37:05 by yitoh         #+#    #+#                 */
/*   Updated: 2024/04/20 18:58:59 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

PhoneBook::PhoneBook()
{
    std::cout << "Phonebook is constructed" << std::endl;  
}

PhoneBook::~PhoneBook()
{
    std::cout << "Phonebook is deconstructed" << std::endl;    
}


void    PhoneBook::add()
{
    std::string f_name;
    std::string l_name;
    std::string n_name;
    std::string phone;
    std::string secret;
    
    

    
    
    std::cout << "Please enter your first name: " << std::endl;
    std::getline(std::cin, f_name);

}

void    PhoneBook::search(){

}

void    PhoneBook::exit(){

}
