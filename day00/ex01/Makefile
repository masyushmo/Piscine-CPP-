#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmasyush <mmasyush@student.unit.ua>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/30 12:49:28 by mmasyush          #+#    #+#              #
#    Updated: 2019/09/30 12:49:28 by mmasyush         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

CC = clang++

FLAGS = -Wall -Werror -Wextra

NAME = phonebook

SRC = main.cpp ClassContacts.cpp   

OBJ = $(SRC:.cpp=.o)

INC = ClassContacts.hpp

all: $(NAME)

$(NAME): $(OBJ) $(INC)
		$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp %.hpp
		$(CC) $(FLAGS) -o $@ -c $<

clean:
		@rm -f $(OBJ)

fclean: clean
		@rm -f $(NAME)

re: fclean all