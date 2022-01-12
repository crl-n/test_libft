/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_libft.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 18:05:28 by cnysten           #+#    #+#             */
/*   Updated: 2021/12/07 14:04:45 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

int	main(void)
{
	print_banner();

	// First part
	print_part_one();
	test_memset();
	test_bzero();
	test_memcpy();
	test_memccpy();
	test_memmove();
	test_memchr();
	test_memcmp();
	test_strlen();
	test_strdup();
	test_strcpy();
	test_strncpy();
	test_strcat();
	test_strncat();
	test_strlcat();
	test_strchr();
	test_strrchr();
	test_strstr();
	test_strnstr();
	test_strcmp();
	test_strncmp();
	test_atoi();
	test_isalpha();
	test_isdigit();
	test_isalnum();
	test_isascii();
	test_isprint();
	test_toupper();
	test_tolower();

	// Second part
	print_additional();
	test_memalloc();
	test_memdel();
	test_strnew();
	test_strdel();
	test_strclr();
	test_striter();
	test_striteri();
	test_strmap();
	test_strmapi();
	test_strequ();
	test_strnequ();
	test_strsub();
	test_strjoin();
	test_strtrim();
	test_strsplit();
	test_itoa();
	test_putchar();
	test_putnbr();

	// Bonus part
	print_bonus();
	test_lstnew();
	test_lstdelone();
	test_lstdel();
	test_lstadd();
	test_lstiter();
	test_lstmap();

#ifdef PERSONAL
	// 5 Extra functions
	test_lstsize();
	test_lstget();
	test_lstpop();
	test_lstpop_left();
	test_lstadd_back();
#endif
	return (0);
}
