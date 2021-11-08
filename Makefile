# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cnysten <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/05 12:54:18 by cnysten           #+#    #+#              #
#    Updated: 2021/11/08 14:34:55 by cnysten          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = test_libft

SRCS = test_libft.c\
	   test_memset.c\
	   test_itoa.c

LIB = ../libft/libft.a

HDR = ../libft/libft.h

all: $(NAME)

$(NAME): $(SRCS)
	gcc -Wall -Wextra -Werror $(SRCS) -L../libft/ -lft -I../libft/

clean:

fclean: clean
	/bin/rm $(NAME)

re: fclean all
