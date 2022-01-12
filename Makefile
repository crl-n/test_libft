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

LIBFT_PATH = ../libft/

TEST_SRCS = main.c\
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

LIB_SRCS = $(LIBFT_PATH)ft_memset.c \
		  $(LIBFT_PATH)ft_striter.c \
		  $(LIBFT_PATH)ft_toupper.c \
		  $(LIBFT_PATH)ft_tolower.c \
		  $(LIBFT_PATH)ft_strmapi.c \
		  $(LIBFT_PATH)ft_strmap.c \
		  $(LIBFT_PATH)ft_strclr.c \
		  $(LIBFT_PATH)ft_memdel.c \
		  $(LIBFT_PATH)ft_memalloc.c \
		  $(LIBFT_PATH)ft_isascii.c \
		  $(LIBFT_PATH)ft_isprint.c \
		  $(LIBFT_PATH)ft_isalnum.c \
		  $(LIBFT_PATH)ft_isdigit.c \
		  $(LIBFT_PATH)ft_isalpha.c \
		  $(LIBFT_PATH)ft_islower.c \
		  $(LIBFT_PATH)ft_isupper.c \
		  $(LIBFT_PATH)ft_striteri.c \
		  $(LIBFT_PATH)ft_strdel.c \
		  $(LIBFT_PATH)ft_bzero.c \
		  $(LIBFT_PATH)ft_memcpy.c \
		  $(LIBFT_PATH)ft_memccpy.c \
		  $(LIBFT_PATH)ft_memmove.c \
		  $(LIBFT_PATH)ft_memchr.c \
		  $(LIBFT_PATH)ft_memcmp.c \
		  $(LIBFT_PATH)ft_strlen.c \
		  $(LIBFT_PATH)ft_strdup.c \
		  $(LIBFT_PATH)ft_strcpy.c \
		  $(LIBFT_PATH)ft_strncpy.c \
		  $(LIBFT_PATH)ft_strcat.c \
		  $(LIBFT_PATH)ft_strncat.c \
		  $(LIBFT_PATH)ft_strlcat.c \
		  $(LIBFT_PATH)ft_strchr.c \
		  $(LIBFT_PATH)ft_strrchr.c \
		  $(LIBFT_PATH)ft_strstr.c \
		  $(LIBFT_PATH)ft_strnstr.c \
		  $(LIBFT_PATH)ft_strcmp.c \
		  $(LIBFT_PATH)ft_strncmp.c \
		  $(LIBFT_PATH)ft_atoi.c \
		  $(LIBFT_PATH)ft_itoa.c \
		  $(LIBFT_PATH)ft_strnew.c \
		  $(LIBFT_PATH)ft_strtrim.c \
		  $(LIBFT_PATH)ft_strequ.c \
		  $(LIBFT_PATH)ft_strnequ.c \
		  $(LIBFT_PATH)ft_strsub.c \
		  $(LIBFT_PATH)ft_strjoin.c \
		  $(LIBFT_PATH)ft_strsplit.c \
		  $(LIBFT_PATH)ft_putnbr.c \
		  $(LIBFT_PATH)ft_putchar.c \
		  $(LIBFT_PATH)ft_putstr.c \
		  $(LIBFT_PATH)ft_lstnew.c \
		  $(LIBFT_PATH)ft_lstdelone.c \
		  $(LIBFT_PATH)ft_lstdel.c \
		  $(LIBFT_PATH)ft_lstadd.c \
		  $(LIBFT_PATH)ft_lstmap.c \
		  $(LIBFT_PATH)ft_lstiter.c \

EXTRA_SRCS = $(LIBFT_PATH)ft_lstpop_left.c \
		  $(LIBFT_PATH)ft_lstadd_back.c \
		  $(LIBFT_PATH)ft_lstpop.c \
		  $(LIBFT_PATH)ft_lstget.c \
		  $(LIBFT_PATH)ft_lstsize.c \

EXTRA_TESTS = test_lstpop.c \
		   test_lstget.c \
		   test_lstsize.c \
		   test_lstpop_left.c \
		   test_lstadd_back.c \

LIB = $(LIBFT_PATH)libft.a

LIBFLAG = -L$(LIBFT_PATH) -lft

CFLAGS = -fno-builtin -g -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(TEST_SRCS) $(LIB_SRCS)
	gcc $(CFLAGS) -DPERSONAL -o $(NAME) $(TEST_SRCS) $(LIB_SRCS) $(EXTRA_TESTS) $(EXTRA_SRCS) -I$(LIBFT_PATH)

eval: $(EVAL)
	gcc $(CFLAGS) -o $(NAME) $(TEST_SRCS) $(LIB_SRCS) -I$(LIBFT_PATH)

$(EVAL): $(TEST_SRCS) $(LIB_SRCS) $(EXTRA_TESTS) $(EXTRA_SRCS)

clean:

fclean: clean
	rm $(NAME)
	rm -rf test_libft.dSYM

re: fclean all
