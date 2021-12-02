/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memccpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 10:52:58 by cnysten           #+#    #+#             */
/*   Updated: 2021/12/02 10:57:33 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_memccpy(void)
{
	t_test	*test = new_test();
	char	d1[6];
	char	d2[6];
	char	s[] = "abcde";

	print_function("FT_MEMCCPY");

	bzero(d1, 6);
	bzero(d2, 6);

	// TYest with c
	memccpy(d1, s, 'c', 5);
	ft_memccpy(d2, s, 'c', 5);
	test_string(d1, d2, test);

	// Test without c
	memccpy(d1, s, 'x', 5);
	ft_memccpy(d2, s, 'x', 5);
	test_string(d1, d2, test);

	evaluate(test);
	free(test);
}
