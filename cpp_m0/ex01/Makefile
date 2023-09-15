# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/03 15:46:49 by fhihi             #+#    #+#              #
#    Updated: 2023/06/14 19:25:08 by fhihi            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Phonebook

FLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -f

CC = g++

SRC = PhoneBook.cpp Contact.cpp main.cpp

$(NAME): $(SRC) PhoneBook.hpp Contact.hpp head.hpp
	@ $(CC) $(SRC) -o $@

all: $(NAME)

clean:

fclean: clean
	@ $(RM) $(NAME)

re: fclean all