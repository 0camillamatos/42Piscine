# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cammatos <cammatos@student.42adel.org.au>  +#+  +:+       +#+         #
#        rtahmid <rtahmid@student.42adel.org.au>  +#+#+#+#+#+   +#+            #
#    Created: 2025/02/09 14:39:46 by cammatos          #+#    #+#              #
#    Updated: 2025/02/09 14:40:51 by cammatos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=bsq
CC=gcc
CFLAGS=-Wall -Wextra -Werror

SRCS=read_map.c utils.c map_utils.c bsq_solver.c dp_utils.c
OBJS=$(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

