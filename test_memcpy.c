/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 09:46:58 by cnysten           #+#    #+#             */
/*   Updated: 2021/12/02 10:52:19 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_memcpy(void)
{
	t_test	*test = new_test();
	char s1[6] = "Hello";
	char d1[6];
	char s2[6] = "Hello";
	char d2[6];

	print_function("FT_MEMCPY");

	memcpy(d1, s1, 6);
	ft_memcpy(d2, s2, 6);
	test_memory(d1, d2, test);

	evaluate(test);
	free(test);
}
