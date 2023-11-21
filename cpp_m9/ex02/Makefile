# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/31 18:35:52 by fhihi             #+#    #+#              #
#    Updated: 2023/11/21 11:28:23 by fhihi            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PmergeMe

FLAGS = -Wall -Wextra -Werror -std=c++98 

RM = rm -f

CC = c++

SRC = main.cpp PmergeMe.cpp list.cpp vec.cpp

OBJ = $(SRC:.cpp=.o)

ICL = PmergeMe.hpp list.hpp vec.hpp

%.o: %.c
	@ c++ $(CFLAGS) -c $< -o $@ 

$(NAME): $(OBJ) $(ICL)
	@ $(CC) $(OBJ) -o $@

all: $(NAME)

clean:
	@ $(RM) $(OBJ)

fclean: clean
	@ $(RM) $(NAME)

re: fclean all