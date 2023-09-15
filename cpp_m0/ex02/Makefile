# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/14 20:50:49 by fhihi             #+#    #+#              #
#    Updated: 2023/06/17 15:38:23 by fhihi            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Account

FLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -f

CC = g++

SRC = Account.cpp tests.cpp

$(NAME): $(SRC) Account.hpp 
	@ $(CC) $(SRC) -o $@

all: $(NAME)

clean:

fclean: clean
	@ $(RM) $(NAME)

re: fclean all