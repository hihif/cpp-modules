# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/17 18:45:42 by fhihi             #+#    #+#              #
#    Updated: 2023/06/17 19:09:20 by fhihi            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie

FLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -f

CC = g++

SRC = Zombie.cpp newZombie.cpp main.cpp randomChump.cpp 

$(NAME): $(SRC) Zombie.hpp 
	@ $(CC) $(SRC) -o $@

all: $(NAME)

clean:

fclean: clean
	@ $(RM) $(NAME)

re: fclean all