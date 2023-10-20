# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/11 11:31:40 by fhihi             #+#    #+#              #
#    Updated: 2023/10/11 11:32:10 by fhihi            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = btc

FLAGS = -Wall -Wextra -Werror -std=c++98 

RM = rm -f

CC = c++

SRC = main.cpp BitcoinExchange.cpp

ICL = BitcoinExchange.hpp

$(NAME): $(SRC) $(ICL)
	@ $(CC) $(FLAGS) $(SRC) -o $@

all: $(NAME)

clean:

fclean: clean
	@ $(RM) $(NAME)

re: fclean all