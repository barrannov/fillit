#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mponomar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/13 16:19:50 by mponomar          #+#    #+#              #
#    Updated: 2017/01/20 21:32:21 by mponomar         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = fillit

WWW = -Wall -Wextra -Werror

SRC = ft_fill_coor.c \
	ft_putchar.c \
	ft_error.c \
	ft_putstr.c \
	ft_read.c \
	ft_strdup.c \
	ft_valid.c \
	ft_create_map.c \
	ft_arrange.c \
	ft_algorithm.c \
	ft_allarrange.c \
	move_r.c \
	move_l.c \
	check_min.c \
	move_coor_r.c \
	size_map.c \
	check_end.c \
	clean_by_coor.c \
	move_coor_rad.c \
	fill.c \
	print_map.c \
	ft_charrange2.c \
	move_one.c \
	main.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	gcc $(WWW) $(OBJ) -o $(NAME)

%.o: %.c
	gcc $(WWW) -c $<

clean:
	rm -rf $(OBJ) 

fclean: clean
	rm -rf $(NAME)

re: fclean all

rmf:
	rm *~
	rm \#*
	rm *.out