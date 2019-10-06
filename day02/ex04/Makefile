# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/03 19:46:48 by mmasyush          #+#    #+#              #
#    Updated: 2019/10/03 19:47:41 by mmasyush         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang++

FLAGS = -Wall -Werror -Wextra

NAME = eval_expr

SRC = main.cpp Fixed.cpp   

OBJ = $(SRC:.cpp=.o)

INC = Fixed.hpp

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