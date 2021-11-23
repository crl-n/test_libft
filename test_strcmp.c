/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:38:20 by cnysten           #+#    #+#             */
/*   Updated: 2021/11/17 16:59:21 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_strcmp(void)
{
	print_ft("FT_STRCMP");

	test_int(strcmp("42", "42"), ft_strcmp("42", "42"), "Test same string (\"42\")");
	test_int(strcmp("", ""), ft_strcmp("", ""), "Test same string (\"\")");
	test_int(strcmp("aab", "aax"), ft_strcmp("aab", "aax"), "aab and aax");
	// printf("strcmp: %d, ft_strcmp: %d\n", strcmp("aab", "aax"), ft_strcmp("aab", "aax"));
	test_int(strcmp("AAA", ""), ft_strcmp("AAA", ""), "AAA vs. empty string");
	// printf("strcmp: %d, ft_strcmp: %d\n", strcmp("AAA", ""), ft_strcmp("AAA", ""));
	test_int(strcmp("~~~", ""), ft_strcmp("~~~", ""), "~~~ vs. empty string");
	// printf("strcmp: %d, ft_strcmp: %d\n", strcmp("~~~", ""), ft_strcmp("~~~", ""));
	test_int(strcmp(" ", "~"), ft_strcmp(" ", "~"), "Space and tilde");
	// printf("strcmp: %d, ft_strcmp: %d\n", strcmp(" ", "~"), ft_strcmp(" ", "~"));
	test_int(strcmp("[", "v"), ft_strcmp("[", "v"), "[ and v");
	// printf("strcmp: %d, ft_strcmp: %d\n", strcmp("[", "v"), ft_strcmp("[", "v"));
}
