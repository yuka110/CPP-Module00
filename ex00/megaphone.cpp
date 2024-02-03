/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/19 17:01:21 by yitoh         #+#    #+#                 */
/*   Updated: 2024/02/03 15:13:48 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <cctype>

// class simpleclass
// {
//     private:
//         std::string _name;
//     public:
//         simpleclass(void){
//             std::cout << "Creation" << std::endl;
//         }
//         ~simpleclass(void){
//             std::cout << "Descruction" << std::endl;
//         }
//         void printsomething(void){
//             std::cout << "something" << std::endl;
//         }
        
// };

int main(int ac, char **av)
{
    // simpleclass hello;

    // hello.printsomething();
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