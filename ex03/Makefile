# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/29 00:51:30 by rshatra           #+#    #+#              #
#    Updated: 2024/10/29 01:34:11 by rshatra          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = materia
CFLAGS = -g -Wall -Werror -Wextra -std=c++11
CC = g++

SRCS = main.cpp AMateria.cpp Cure.cpp Ice.cpp Character.cpp  MateriaSource.cpp

OBJ = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.SILENT:
