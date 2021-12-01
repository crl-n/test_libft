/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 16:41:33 by cnysten           #+#    #+#             */
/*   Updated: 2021/12/01 16:59:07 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_isalpha(void)
{
	t_test	*test = new_test();
	int		c = 0;
	int		fail = 0;

	test->target = 1;
	print_function("FT_ISALPHA");

	while (c < 128)
	{
		if (ft_isalpha(c) != isalpha(c))
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
		printf("\tYour ft_isalpha failed with input: %c\n", c);
}
