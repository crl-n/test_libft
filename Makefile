# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cnysten <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/05 12:54:18 by cnysten           #+#    #+#              #
#    Updated: 2021/12/07 14:09:53 by cnysten          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = test_libft

SRCS = main.c\
				   test_putchar.c \
			   test_striter.c \
	   test_toupper.c \
	   test_tolower.c \
	   test_strnew.c \
	   test_strnequ.c \
	   test_strmapi.c \
	   test_strmap.c \
	   test_strequ.c \
	   test_strdel.c \
	   test_strclr.c \
	   test_memdel.c \
	   test_memalloc.c \
	   test_strncmp.c \
	   test_strrchr.c \
	   test_strchr.c \
	   test_strlcat.c \
	   test_memcmp.c \
	   test_memchr.c \
	   test_memmove.c \
	   test_memccpy.c \
	   test_memcpy.c \
	   test_bzero.c \
	   test_strlen.c \
	   test_strdup.c \
	   test_isascii.c \
	   test_isprint.c \
	   test_isalnum.c \
	   test_isdigit.c \
	   test_isalpha.c \
	   other_functions.c \
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

EXTRASRCS = test_lstpop_left.c \
			test_lstadd_back.c \
			test_lstpop.c \
			test_lstget.c \
			test_lstsize.c \

LIBSRCS = ../libft/ft_memset.c \
		  ../libft/ft_striter.c \
		  ../libft/ft_toupper.c \
		  ../libft/ft_tolower.c \
		  ../libft/ft_strmapi.c \
		  ../libft/ft_strmap.c \
		  ../libft/ft_strclr.c \
		  ../libft/ft_memdel.c \
		  ../libft/ft_memalloc.c \
		  ../libft/ft_isascii.c \
		  ../libft/ft_isprint.c \
		  ../libft/ft_isalnum.c \
		  ../libft/ft_isdigit.c \
		  ../libft/ft_isalpha.c \
		  ../libft/ft_islower.c \
		  ../libft/ft_isupper.c \
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

ADDTESTS = test_lstpop.c \
		   test_lstget.c \
		   test_lstsize.c \
		   test_lstpop_left.c \
		   test_lstadd_back.c \

EXTRASRCS = ../libft/ft_lstpop_left.c \
		  ../libft/ft_lstadd_back.c \
		  ../libft/ft_lstpop.c \
		  ../libft/ft_lstget.c \
		  ../libft/ft_lstsize.c \

LIB = ../libft/libft.a

LIBFLAG = -L../libft/ -lft

HDR = ../libft/libft.h

all: $(NAME)

$(NAME): $(SRCS)
	gcc -fno-builtin -g -Wall -Wextra -Werror $(SRCS) $(ADDTESTS) $(EXTRASRCS) $(LIBSRCS) -I../libft/

clean:

fclean: clean
	/bin/rm $(NAME)

re: fclean all
