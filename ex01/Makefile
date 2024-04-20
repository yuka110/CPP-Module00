# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: yitoh <yitoh@student.codam.nl>               +#+                      #
#                                                    +#+                       #
#    Created: 2024/01/28 16:36:02 by yitoh         #+#    #+#                  #
#    Updated: 2024/04/20 18:46:43 by yitoh         ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME	=phonebook
CC		=c++
CFLAGS	=-Wall -Werror -Wextra #-g -fsanitize=thread #-flto -O3
RM		=rm -f
SRC		=Phonebook.cpp Contact.hpp main.cpp
OBJ		=$(SRC:%.cpp=obj/%.o)

all:	$(NAME)


$(OBJ):		$(SRC) phonebook.hpp Makefile
				@mkdir -p $(dir $@)
				@printf "\e[1;34mBuilding $@\n\e[0;00m"
				@$(CC) $(CFLAGS) -c $(@:obj/%.o=%.cpp) -o $@

$(NAME):	$(OBJ)
				@printf "\e[1;36mCompiling $@\n\e[0;00m"
				@$(CC) $(CFLAGS) $^ -o $@
				@printf "\e[1;32mDone\e[0;00m\n"

clean:
				@$(RM) -r obj
				@printf "\e[1;35mCleaned Object Files\n\e[0;00m"

fclean:		clean
				@$(RM) $(NAME)
				@printf "\e[1;31mCleaned Executables\n\e[0;00m"

re:			fclean all

.PHONY:		all clean fclean re libft