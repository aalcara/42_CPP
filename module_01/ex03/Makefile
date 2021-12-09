# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/04 13:59:39 by aalcara-          #+#    #+#              #
#    Updated: 2021/12/09 09:19:14 by aalcara-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = main

SRC = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OBJ = $(SRC:.cpp=.o)

CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -fr

$(NAME): $(SRC)
	@$(CPP) $(CPPFLAGS) $(SRC) -o $(NAME)
	@echo "[$(NAME)] created!"

# %.o: %.cpp
# 	@$(CPP) $< -o $@
# 	@echo "$@ created!" 

all: $(NAME)

run: re
	@./$(NAME)

clean:
	@$(RM) $(OBJ)
	@echo "objects removed."

fclean: clean
	@$(RM) $(NAME)
	@echo "[$(NAME)] removed."

re: fclean all
