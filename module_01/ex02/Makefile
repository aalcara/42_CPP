# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/04 13:59:39 by aalcara-          #+#    #+#              #
#    Updated: 2021/12/08 23:19:22 by aalcara-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = main

SRC = main.cpp
OBJ = $(SRC:.cpp=.o)

CPP = c++
CPPFLAGS = -g -Wall -Wextra -Werror -std=c++98

RM = rm -fr

$(NAME): $(OBJ)
	@$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)
	@echo "[$(NAME)] created!"

%.o: %.cpp
	@$(CPP) $(CPPFLAGS) -c $< -o $@
	@echo "$@ created!" 

all: $(NAME)

run: $(NAME)
	@./$(NAME)

clean:
	@$(RM) $(OBJ)
	@echo "objects removed."

fclean: clean
	@$(RM) $(NAME)
	@echo "[$(NAME)] removed."

re: fclean all
