/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isascii.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 09:15:35 by cnysten           #+#    #+#             */
/*   Updated: 2021/12/01 17:00:07 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_isascii(void)
{
	t_test	*test = new_test();
	int		c = 0;
	int		fail = 0;

	test->target = 1;
	print_function("FT_ISASCII");

	while (c < 256)
	{
		if (ft_isascii(c) != isascii(c))
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
	if (fail)
		printf("\tYour ft_isascii failed with input: %c\n", c);
}
