/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strncat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 20:33:08 by cnysten           #+#    #+#             */
/*   Updated: 2021/12/01 22:57:11 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_strncat(void)
{
	t_test	*test = new_test();
	char	d1[7] = "abc";
	char	s1[] = "def";
	char	d2[7] = "abc";
	char	s2[] = "def";

	print_function("FT_STRNCAT");

	ft_strncat(d1, s1, 3);
	strncat(d2, s2, 3);
	test_string(d2, d1, test);

	evaluate(test);
	free(test);
}
