# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/11 15:16:22 by fhihi             #+#    #+#              #
#    Updated: 2023/10/11 15:16:36 by fhihi            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = exe

FLAGS = -Wall -Wextra -Werror -std=c++98 

RM = rm -f

CC = c++

SRC = main.cpp ScalarConverter.cpp

ICL = ScalarConverter.hpp

$(NAME): $(SRC) $(ICL)
	@ $(CC) $(FLAGS) $(SRC) -o $@

all: $(NAME)

clean:

fclean: clean
	@ $(RM) $(NAME)

re: fclean all