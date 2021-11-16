/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 20:12:00 by cnysten           #+#    #+#             */
/*   Updated: 2021/11/16 21:25:50 by cnysten          ###   ########.fr       */
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

	char	haystack[] = "can you handle empty string?";
	char	needle[] = "";

	printf("\nHaystack: %s\n", haystack);
	printf("Needle: %s\n", needle);
	printf("Ft_strnstr: %s\n", ft_strnstr(haystack, needle, strlen(haystack)));
	printf("Strnstr: %s\n", strnstr(haystack, needle, strlen(haystack)));
}

static void	test3(void)
{
	// Test with len 0

	char	haystack[] = "can you handle len 0?";
	char	needle[] = "abc";

	printf("\nHaystack: %s\n", haystack);
	printf("Needle: %s\n", needle);
	printf("Ft_strnstr: %s\n", ft_strnstr(haystack, needle, 0));
	printf("Strnstr: %s\n", strnstr(haystack, needle, 0));
}

static void	test4(void)
{
	// Test with len 0 and empty strings

	char	haystack[] = "can you handle both?";
	char	needle[] = "";

	printf("\nHaystack: %s\n", haystack);
	printf("Needle: %s\n", needle);
	printf("Ft_strnstr: %s\n", ft_strnstr(haystack, needle, 0));
	printf("Strnstr: %s\n", strnstr(haystack, needle, 0));
}

void	test_strnstr(void)
{
	print_ft("FT_STRNSTR");
	test1();
	test2();
	test3();
	test4();
}
