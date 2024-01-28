/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/28 16:37:05 by yitoh         #+#    #+#                 */
/*   Updated: 2024/01/28 18:00:46 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main(void)
{
    std::string action;

    // if (ac != 1)
    //     return (0);
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
        //clean data and return 0 operation
    }
    else
        std::cout << "Error. Please type ADD, SEARCH, or EXIT for more atcions." << std::endl;
    return (0);
}
