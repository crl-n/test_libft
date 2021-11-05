# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cnysten <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/05 12:54:18 by cnysten           #+#    #+#              #
#    Updated: 2021/11/05 15:26:51 by cnysten          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = test_isf

SRCS = test_isf.c

LIB = ../libft/libft.a

HDR = ../libft/libft.h

all: $(NAME)

$(NAME): $(SRCS)
	gcc -Wall -Wextra -Werror $(SRCS) -L../libft/ -lft -I../libft/

clean:

fclean: clean
	/bin/rm $(NAME)

re: fclean all
