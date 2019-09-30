#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmasyush <mmasyush@student.unit.ua>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/30 11:57:59 by mmasyush          #+#    #+#              #
#    Updated: 2019/09/30 11:58:00 by mmasyush         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

CC = clang++

FLAGS = -Wall -Werror -Wextra

NAME = megaphone

SRC = megaphone.cpp

OBJ = megaphone.o

all: $(NAME)

$(NAME): $(OBJ)
		$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
		$(CC) $(FLAGS) -o $@ -c $<

clean:
		@rm -f $(OBJ)

fclean: clean
		@rm -f $(NAME)

re: fclean all

.PHONY: