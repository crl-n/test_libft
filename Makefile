# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cnysten <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/05 12:54:18 by cnysten           #+#    #+#              #
#    Updated: 2021/11/25 11:10:48 by cnysten          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = test_libft

SRCS = main.c\
	   test_isascii.c \
	   test_isprint.c \
	   test_isalnum.c \
	   test_isdigit.c \
	   test_isalpha.c \
	   test_lstpop_left.c \
	   test_lstadd_back.c \
	   other_functions.c \
	   test_lstpop.c \
	   test_lstget.c \
	   test_lstsize.c \
	   test_strstr.c \
	   test_strncat.c \
	   test_striteri.c \
	   test_functions.c\
	   print_functions.c\
	   test_memset.c\
	   test_strnstr.c \
	   test_strcmp.c \
	   test_strcpy.c \
	   test_strncpy.c \
	   test_strcat.c \
	   test_atoi.c \
	   test_itoa.c \
	   test_strsub.c \
	   test_strjoin.c \
	   test_strtrim.c \
	   test_strsplit.c \
	   test_putnbr.c \
	   test_lstnew.c \
	   test_lstdelone.c \
	   test_lstdel.c \
	   test_lstadd.c \
	   test_lstiter.c \
	   test_lstmap.c \

LIBSRCS = ../libft/ft_memset.c \
		  ../libft/ft_isascii.c \
		  ../libft/ft_isprint.c \
		  ../libft/ft_isalnum.c \
		  ../libft/ft_isdigit.c \
		  ../libft/ft_isalpha.c \
		  ../libft/ft_lstpop_left.c \
		  ../libft/ft_lstadd_back.c \
		  ../libft/ft_lstpop.c \
		  ../libft/ft_lstget.c \
		  ../libft/ft_lstsize.c \
		  ../libft/ft_striteri.c \
		  ../libft/ft_strdel.c \
		  ../libft/ft_bzero.c \
		  ../libft/ft_memcpy.c \
		  ../libft/ft_memccpy.c \
		  ../libft/ft_memmove.c \
		  ../libft/ft_memchr.c \
		  ../libft/ft_memcmp.c \
		  ../libft/ft_strlen.c \
		  ../libft/ft_strdup.c \
		  ../libft/ft_strcpy.c \
		  ../libft/ft_strncpy.c \
		  ../libft/ft_strcat.c \
		  ../libft/ft_strncat.c \
		  ../libft/ft_strlcat.c \
		  ../libft/ft_strchr.c \
		  ../libft/ft_strrchr.c \
		  ../libft/ft_strstr.c \
		  ../libft/ft_strnstr.c \
		  ../libft/ft_strcmp.c \
		  ../libft/ft_strncmp.c \
		  ../libft/ft_atoi.c \
		  ../libft/ft_itoa.c \
		  ../libft/ft_strnew.c \
		  ../libft/ft_strtrim.c \
		  ../libft/ft_strequ.c \
		  ../libft/ft_strnequ.c \
		  ../libft/ft_strsub.c \
		  ../libft/ft_strjoin.c \
		  ../libft/ft_strsplit.c \
		  ../libft/ft_putnbr.c \
		  ../libft/ft_putchar.c \
		  ../libft/ft_putstr.c \
		  ../libft/ft_lstnew.c \
		  ../libft/ft_lstdelone.c \
		  ../libft/ft_lstdel.c \
		  ../libft/ft_lstadd.c \
		  ../libft/ft_lstmap.c \
		  ../libft/ft_lstiter.c \



LIB = ../libft/libft.a

LIBFLAG = -L../libft/ -lft

HDR = ../libft/libft.h

all: $(NAME)

$(NAME): $(SRCS)
	gcc -fno-builtin -g -Wall -Wextra -Werror $(SRCS) $(LIBSRCS) -I../libft/

clean:

fclean: clean
	/bin/rm $(NAME)

re: fclean all
