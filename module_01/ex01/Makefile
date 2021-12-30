# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/04 13:59:39 by aalcara-          #+#    #+#              #
#    Updated: 2021/12/30 15:11:34 by aalcara-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie

SRC = main.cpp Zombie.cpp ZombieHorde.cpp
OBJ = $(SRC:.cpp=.o)

CPP = c++
CPPFLAGS = -g -Wall -Wextra -Werror -std=c++98

RM = rm -fr

$(NAME): $(OBJ)
	@$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	@$(CPP) $(CPPFLAGS) -c $< -o $@
	@echo "$@ created!" 

all: $(NAME)
	@echo "[$(NAME)] created!"

run: $(NAME)
	@./zombie

valgrind:	$(OBJ)
	$(CPP) $(OBJ) $(CPPFLAGS) $(L_FLAGS) -o $(NAME)
	@echo "[$(NAME)] created!"
	valgrind --leak-check=full --track-origins=yes --show-leak-kinds=all ./$(NAME)

clean:
	@$(RM) $(OBJ)
	@echo "objects removed."

fclean: clean
	@$(RM) $(NAME)
	@echo "[$(NAME)] removed."

re: fclean all
