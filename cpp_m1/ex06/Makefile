# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/18 20:06:22 by fhihi             #+#    #+#              #
#    Updated: 2023/06/20 15:45:00 by fhihi            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harlFilter

FLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -f

CC = g++

SRC = main.cpp Harl.cpp

ICL = Harl.hpp

$(NAME): $(SRC) $(ICL)
	@ $(CC) $(SRC) -o $@

all: $(NAME)

clean:

fclean: clean
	@ $(RM) $(NAME)

re: fclean all