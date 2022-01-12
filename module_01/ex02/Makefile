# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/04 13:59:39 by aalcara-          #+#    #+#              #
#    Updated: 2022/01/12 15:20:55 by aalcara-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = main

SRC = main.cpp

CPP = c++
CPPFLAGS = -g -Wall -Wextra -Werror -std=c++98

RM = rm -fr

$(NAME): $(SRC)
	@$(CPP) $(CPPFLAGS) $(SRC) -o $(NAME)
	@echo "[$(NAME)] created!"

all: $(NAME)

run: $(NAME)
	@./$(NAME)

clean:
	@$(RM) $(NAME)
	@echo "[$(NAME)] removed."

fclean: clean

re: fclean all
