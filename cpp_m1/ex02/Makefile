# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/17 19:28:21 by fhihi             #+#    #+#              #
#    Updated: 2023/06/17 19:36:38 by fhihi            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = exe

FLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -f

CC = g++

SRC = main.cpp 

$(NAME): $(SRC) 
	@ $(CC) $(SRC) -o $@

all: $(NAME)

clean:

fclean: clean
	@ $(RM) $(NAME)

re: fclean all