# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmasyush <mmasyush@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/06 02:42:13 by mmasyush          #+#    #+#              #
#    Updated: 2019/10/06 08:33:42 by mmasyush         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang++

FLAGS = -Wall -Wextra -Werror

NAME = ft_retro

SRC = AEnemys.cpp AFly.cpp AProjs.cpp AWeapon.cpp Objects.cpp Game.cpp Player.cpp main.cpp

SRC_DIR = ./src/

OBJ_DIR = ./obj/

INCLUDES = -lncurses

OBJ = $(addprefix $(OBJ_DIR), $(SRC:.cpp=.o))

all: obj_dir $(NAME)
	@echo "\033[22;32mCOMPILATED! \033[22;35mヽ(•‿•)ノ"

obj_dir:
	mkdir -p $(OBJ_DIR)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(INCLUDES) $(OBJ) -o $(NAME)c

$(OBJ_DIR)%.o:$(SRC_DIR)%.cpp
	$(CC) $(FLAGS) -o $@ -c $<

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all
