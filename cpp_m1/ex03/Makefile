# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/17 19:52:20 by fhihi             #+#    #+#              #
#    Updated: 2023/06/18 16:42:00 by fhihi            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = exe

FLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -f

CC = g++

SRC = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp 

ICL = Weapon.hpp HumanA.hpp HumanB.hpp

$(NAME): $(SRC) $(ICL)
	@ $(CC) $(SRC) -o $@

all: $(NAME)

clean:

fclean: clean
	@ $(RM) $(NAME)

re: fclean all