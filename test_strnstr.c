/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 20:12:00 by cnysten           #+#    #+#             */
/*   Updated: 2021/12/01 17:07:50 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

static void	test1(void)
{
	char	haystack[20] = "Hello ABC hello 123";
	char	needle[4] = "ABC";

	printf("Haystack: %s\n", haystack);
	printf("Needle: %s\n", needle);
	printf("Ft_strnstr: %s\n", ft_strnstr(haystack, needle, 11));
	printf("Strnstr: %s\n", strnstr(haystack, needle, 11));
}

static void	test2(void)
{
	// Test with empty strings

	char	haystack[29] = "can you handle empty string?";
	char	needle[1] = "";

	printf("\nHaystack: %s\n", haystack);
	printf("Needle: %s\n", needle);
	printf("Ft_strnstr: %s\n", ft_strnstr(haystack, needle, strlen(haystack)));
	printf("Strnstr: %s\n", strnstr(haystack, needle, strlen(haystack)));
}

static void	test3(void)
{
	// Test with len 0

	char	haystack[22] = "can you handle len 0?";
	char	needle[4] = "abc";

	printf("\nHaystack: %s\n", haystack);
	printf("Needle: %s\n", needle);
	printf("Ft_strnstr: %s\n", ft_strnstr(haystack, needle, 0));
	printf("Strnstr: %s\n", strnstr(haystack, needle, 0));
}

static void	test4(void)
{
	// Test with len 0 and empty strings

	char	haystack[21] = "can you handle both?";
	char	needle[1] = "";

	printf("\nHaystack: %s\n", haystack);
	printf("Needle: %s\n", needle);
	printf("Ft_strnstr: %s\n", ft_strnstr(haystack, needle, 0));
	printf("Strnstr: %s\n", strnstr(haystack, needle, 0));
}

static void	test5(void)
{
	// Test with shorter str than len

	char	haystack[19] = "will it stop?\0xxx";
	char	needle[4] = "xxx";

	printf("\nHaystack: %s\n", haystack);
	printf("Needle: %s\n", needle);
	printf("Ft_strnstr: %s\n", ft_strnstr(haystack, needle, 50));
	printf("Strnstr: %s\n", strnstr(haystack, needle, 50));
}

void	test_strnstr(void)
{
	print_function("FT_STRNSTR");
	test1();
	test2();
	test3();
	test4();
	test5();
}
