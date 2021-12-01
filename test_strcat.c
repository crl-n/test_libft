/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strcat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:24:30 by cnysten           #+#    #+#             */
/*   Updated: 2021/12/01 21:24:08 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_strcat(void)
{
	t_test	*test = new_test();

	print_function("FT_STRCAT");

	char	s1[7] = "abc";
	char	s2[4] = "def";
	test_string("abcdef", ft_strcat(s1, s2), test);
	evaluate(test);
	free(test);
}
