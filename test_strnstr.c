/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 20:12:00 by cnysten           #+#    #+#             */
/*   Updated: 2021/12/02 13:38:39 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

static void	test1(t_test *test)
{
	char	haystack[20] = "Hello ABC hello 123";
	char	needle[4] = "ABC";
	if (!test_string(strnstr(haystack, needle, 11), ft_strnstr(haystack, needle, 11), test))
	{
		printf("Haystack: %s\n", haystack);
		printf("Needle: %s\n", needle);
		printf("Ft_strnstr: %s\n", ft_strnstr(haystack, needle, 11));
		printf("Strnstr: %s\n", strnstr(haystack, needle, 11));
	}
}

static void	test2(t_test *test)
{
	// Test with empty strings

	char	haystack[29] = "can you handle empty string?";
	char	needle[1] = "";

	if (!test_string(strnstr(haystack, needle, strlen(haystack)), ft_strnstr(haystack, needle, strlen(haystack)), test))
	{
		printf("\nHaystack: %s\n", haystack);
		printf("Needle: %s\n", needle);
		printf("Ft_strnstr: %s\n", ft_strnstr(haystack, needle, strlen(haystack)));
		printf("Strnstr: %s\n", strnstr(haystack, needle, strlen(haystack)));
	}
}

static void	test3(t_test *test)
{
	// Test with len 0

	char	haystack[22] = "can you handle len 0?";
	char	needle[4] = "abc";

	if (!test_address(strnstr(haystack, needle, 0), ft_strnstr(haystack, needle, 0), test))
	{
		printf("\nHaystack: %s\n", haystack);
		printf("Needle: %s\n", needle);
		printf("Ft_strnstr: %s\n", ft_strnstr(haystack, needle, 0));
		printf("Strnstr: %s\n", strnstr(haystack, needle, 0));
	}
}

static void	test4(t_test *test)
{
	// Test with len 0 and empty strings

	char	haystack[21] = "can you handle both?";
	char	needle[1] = "";

	if (!test_string(strnstr(haystack, needle, 0), ft_strnstr(haystack, needle, 0), test))
	{
		printf("\nHaystack: %s\n", haystack);
		printf("Needle: %s\n", needle);
		printf("Ft_strnstr: %s\n", ft_strnstr(haystack, needle, 0));
		printf("Strnstr: %s\n", strnstr(haystack, needle, 0));
	}
}

static void	test5(t_test *test)
{
	// Test with shorter str than len

	char	haystack[19] = "will it stop?\0xxx";
	char	needle[4] = "xxx";

	if (!test_address(strnstr(haystack, needle, 50), ft_strnstr(haystack, needle, 50), test))
	{
		printf("\nHaystack: %s\n", haystack);
		printf("Needle: %s\n", needle);
		printf("Ft_strnstr: %s\n", ft_strnstr(haystack, needle, 50));
		printf("Strnstr: %s\n", strnstr(haystack, needle, 50));
	}
}

void	test_strnstr(void)
{
	t_test	*test = new_test();

	print_function("FT_STRNSTR");

	test1(test);
	test2(test);
	test3(test); // segfault
	test4(test);
	test5(test);

	evaluate(test);
	free(test);
}
