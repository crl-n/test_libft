/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:38:20 by cnysten           #+#    #+#             */
/*   Updated: 2021/12/01 17:45:15 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_strcmp(void)
{
	t_test	*test = new_test();
	print_function("FT_STRCMP");

	test_integer(strcmp("42", "42"), ft_strcmp("42", "42"), test);
	test_integer(strcmp("", ""), ft_strcmp("", ""), test);
	test_integer(strcmp("aab", "aax"), ft_strcmp("aab", "aax"), test);
	// printf("strcmp: %d, ft_strcmp: %d\n", strcmp("aab", "aax"), ft_strcmp("aab", "aax"));
	test_integer(strcmp("AAA", ""), ft_strcmp("AAA", ""), test);
	// printf("strcmp: %d, ft_strcmp: %d\n", strcmp("AAA", ""), ft_strcmp("AAA", ""));
	test_integer(strcmp("~~~", ""), ft_strcmp("~~~", ""), test);
	// printf("strcmp: %d, ft_strcmp: %d\n", strcmp("~~~", ""), ft_strcmp("~~~", ""));
	test_integer(strcmp(" ", "~"), ft_strcmp(" ", "~"), test);
	// printf("strcmp: %d, ft_strcmp: %d\n", strcmp(" ", "~"), ft_strcmp(" ", "~"));
	test_integer(strcmp("[", "v"), ft_strcmp("[", "v"), test);
	// printf("strcmp: %d, ft_strcmp: %d\n", strcmp("[", "v"), ft_strcmp("[", "v"));
	
	evaluate(test);
	
}
