# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/04 13:59:39 by aalcara-          #+#    #+#              #
#    Updated: 2021/12/09 13:57:19 by aalcara-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = replace

SRC = main.cpp
OBJ = $(SRC:.cpp=.o)

CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -fr

$(NAME): $(SRC)
	@$(CPP) $(CPPFLAGS) $(SRC) -o $(NAME)
	@echo "[$(NAME)] created!"

all: $(NAME)

run: re
	@./$(NAME) $(ARGS)

clean:
	@$(RM) $(OBJ)
	@echo "objects removed."

fclean: clean
	@$(RM) $(NAME)
	@echo "[$(NAME)] removed."

re: fclean all
