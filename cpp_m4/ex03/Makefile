# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/20 19:39:13 by fhihi             #+#    #+#              #
#    Updated: 2023/08/20 19:40:32 by fhihi            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = exe

FLAGS = -Wall -Wextra -Werror -std=c++98 

RM = rm -f

CC = g++

SRC = main.cpp AMateria.cpp Ice.cpp Cure.cpp Character.cpp MateriaSource.cpp 

ICL = AMateria.hpp Ice.hpp Cure.hpp Character.hpp MateriaSource.hpp IMateriaSource.hpp ICharacter.hpp

$(NAME): $(SRC) $(ICL)
	@ $(CC) $(FLAGS) $(SRC) -o $@

all: $(NAME)

clean:

fclean: clean
	@ $(RM) $(NAME)

re: fclean all