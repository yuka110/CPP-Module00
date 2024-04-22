/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/03 14:20:18 by yitoh         #+#    #+#                 */
/*   Updated: 2024/04/22 16:45:10 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
    std::string s;
    PhoneBook phonebook;

    phonebook.set_cnt(0);
    std::cout << BOLD_TEXT << "Welcome to PhoneBook." << RESET << std::endl;
    while (1)
    {
        std::cout << BOLD_TEXT << "Type ADD, SEARCH, or EXIT for more actions." << RESET << std::endl;
        if (!std::getline(std::cin, s))
            exit(1);
        if (s == "ADD")
            phonebook.add();
        else if (s == "SEARCH")
            phonebook.search();
        else if (s == "EXIT")
            return (0);
        else
            std::cout << BOLD_TEXT << RED << "Error: " << RESET;
    }  
}