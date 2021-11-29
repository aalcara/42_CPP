# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/22 21:19:06 by aalcara-          #+#    #+#              #
#    Updated: 2021/11/28 14:55:12 by aalcara-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
CPP = c++
SRC = megaphone.cpp

$(NAME):
	@$(CPP) $(CPPFLAGS) $(SRC) -o $(NAME)

all: $(NAME)
	@echo "[$(NAME)] created!"

clean:
	@rm -f $(NAME)
	@echo "removed $(NAME)."

fclean: clean

re: fclean all
