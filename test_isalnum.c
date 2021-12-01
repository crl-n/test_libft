/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalnum.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 09:16:20 by cnysten           #+#    #+#             */
/*   Updated: 2021/12/01 22:07:21 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_isalnum(void)
{
	t_test	*test  = new_test();
	int		c = 0;
	int		fail = 0;

	test->target = 1;
	print_function("FT_ISALNUM");

	while (c < 256)
	{
		if (ft_isalnum(c) != isalnum(c))
		{
			fail = 1;
			break ;
		}
		c++;
	}
	if (fail)
		print_fail();
	else
	{
		print_pass();
		(test->passed)++;
	}
	evaluate(test);
	free(test);
}
