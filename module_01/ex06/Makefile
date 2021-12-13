# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/04 13:59:39 by aalcara-          #+#    #+#              #
#    Updated: 2021/12/13 12:33:19 by aalcara-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = karenFilter

SRC = main.cpp Karen.cpp
OBJ = $(SRC:.cpp=.o)

CPP = clang++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -fr

$(NAME): $(SRC)
	@$(CPP) $(CPPFLAGS) $(SRC) -o $(NAME)
	@echo "[$(NAME)] created!"

all: $(NAME)

run: all
	@./$(NAME) $(ARGS)

clean:
	@$(RM) $(OBJ)
	@echo "objects removed."

fclean: clean
	@$(RM) $(NAME)
	@echo "[$(NAME)] removed."

re: fclean all
