# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/03 15:04:40 by fhihi             #+#    #+#              #
#    Updated: 2023/08/07 16:03:15 by fhihi            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = exe

FLAGS = -Wall -Wextra -Werror -std=c++98 -Wshadow -Wno-shadow

RM = rm -f

CC = g++

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp  DiamondTrap.cpp

ICL = ClapTrap.hpp ScavTrap.hpp FragTrap.hpp DiamondTrap.hpp

$(NAME): $(SRC) $(ICL)
	@ $(CC) $(SRC) -o $@

all: $(NAME)

clean:

fclean: clean
	@ $(RM) $(NAME)

re: fclean all