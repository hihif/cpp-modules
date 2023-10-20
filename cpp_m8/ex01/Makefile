# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/09 11:04:42 by fhihi             #+#    #+#              #
#    Updated: 2023/10/09 11:41:28 by fhihi            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = exe

FLAGS = -Wall -Wextra -Werror -std=c++98 

RM = rm -f

CC = c++

SRC = main.cpp Span.cpp

ICL = Span.hpp

$(NAME): $(SRC) $(ICL)
	@ $(CC) $(FLAGS) $(SRC) -o $@

all: $(NAME)

clean:

fclean: clean
	@ $(RM) $(NAME)

re: fclean all