# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/09 19:21:20 by mmasyush          #+#    #+#              #
#    Updated: 2019/10/10 20:30:49 by mmasyush         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang++

FLAGS = -Wall -Werror -Wextra

NAME = identify

SRC = main.cpp Base.cpp A.cpp B.cpp C.cpp

OBJ = main.o Base.o A.o B.o C.o

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