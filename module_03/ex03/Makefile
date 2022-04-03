# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/25 16:05:13 by aalcara-          #+#    #+#              #
#    Updated: 2022/04/03 16:24:55 by aalcara-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

OBJ = $(SRC:.cpp=.o)

CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -Wshadow

RM = rm -fr

$(NAME): $(OBJ)
	@$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)
	@echo "[$(NAME)] created!"

%.o: %.cpp
	@$(CPP) $(CPPFLAGS) -c $< -o $@
	@echo "$@ created!"

all: $(NAME)

valgrind:	$(NAME)
	valgrind --leak-check=full --track-origins=yes --show-leak-kinds=all ./$(NAME)

run: all
	@./$(NAME)

clean:
	@$(RM) $(OBJ)
	@echo "objects removed."

fclean: clean
	@$(RM) $(NAME)
	@echo "[$(NAME)] removed."

re: fclean all
