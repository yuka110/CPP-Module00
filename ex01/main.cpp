/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/03 14:20:18 by yitoh         #+#    #+#                 */
/*   Updated: 2024/04/20 18:56:40 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main(void)
{
    std::string action;

    std::cout << "Welcome to PhoneBook. Type ADD, SEARCH, or EXIT for more atcions." << std::endl;
    std::getline(std::cin, action);
    if (!action.compare("ADD")){
        std::cout << "ADD!\n";
        //add operation
    }
    else if (!action.compare("SEARCH")){
        std::cout << "SEARCH!\n";
        //search operation
    }
    else if (!action.compare("EXIT")){
        std::cout << "EXIT!\n";
        return (0);
        //clean data and return 0 operation
    }
    else
        std::cout << "Error. Please type ADD, SEARCH, or EXIT for more atcions." << std::endl;
    return (0);
}