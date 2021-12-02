/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 11:09:39 by cnysten           #+#    #+#             */
/*   Updated: 2021/12/02 11:12:52 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_memcmp(void)
{
	t_test	*test = new_test();
	char	s1[] = "abayab";
	char	s2[] = "abayab";
	char	s3[] = "abayaa";
	char	s4[] = "bbayab";

	print_function("FT_MEMCMP");

	test_integer(memcmp(s1, s2, 7), ft_memcmp(s1, s2, 7), test);
	test_integer(memcmp(s1, s3, 7), ft_memcmp(s1, s3, 7), test);
	test_integer(memcmp(s1, s4, 7), ft_memcmp(s1, s4, 7), test);

	evaluate(test);
	free(test);
}
