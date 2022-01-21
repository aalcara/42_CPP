# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/04 13:59:39 by aalcara-          #+#    #+#              #
#    Updated: 2022/01/20 15:58:29 by aalcara-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = main

SRC = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OBJ = $(SRC:.cpp=.o)

CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -fr

$(NAME): $(OBJ)
	@$(CPP) $(CPPFLAGS) $(OBJ) -o $@
	@echo "[$(NAME)] created!"

%.o: %.cpp
	@$(CPP) $(CPPFLAGS) -c $< -o $@
	@echo "$@ created!"

all: $(NAME)

valgrind:	$(SRC)
	@$(CPP) $(OBJ) $(CPPFLAGS) -o $(NAME)
	@echo "[$(NAME)] created!"
	valgrind --leak-check=full --track-origins=yes --show-leak-kinds=all ./$(NAME)

run: all
	./$(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
