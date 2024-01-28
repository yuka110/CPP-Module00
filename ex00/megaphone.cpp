/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/19 17:01:21 by yitoh         #+#    #+#                 */
/*   Updated: 2024/01/28 16:31:35 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int main(int ac, char **av)
{
    if (ac == 1){
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    else {
        for (int cnt = 1; cnt < ac; cnt++){
            for (int i = 0; i < (int)strlen(av[cnt]); i++){
                std::cout << (char)toupper(av[cnt][i]);
            }
        }
        std::cout << std::endl;
    }
    return 0;
}