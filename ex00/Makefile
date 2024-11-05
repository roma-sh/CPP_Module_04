# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/22 20:12:08 by rshatra           #+#    #+#              #
#    Updated: 2024/09/22 22:06:02 by rshatra          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Animal
CFLAGS = -g -Wall -Werror -Wextra
CC = g++

SRCS = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongCat.cpp WrongAnimal.cpp

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

