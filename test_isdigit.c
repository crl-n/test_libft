/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isdigit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 16:42:28 by cnysten           #+#    #+#             */
/*   Updated: 2021/12/01 18:13:36 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_isdigit(void)
{
	t_test	*test  = new_test();
	int		c = 0;
	int		fail = 0;

	*(test->target) = 1;
	print_function("FT_ISDIGIT");

	while (c < 256)
	{
		if (ft_isdigit(c) != isdigit(c))
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
}
