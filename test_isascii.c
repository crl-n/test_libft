/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isascii.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 09:15:35 by cnysten           #+#    #+#             */
/*   Updated: 2021/11/26 09:31:02 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_isascii(void)
{
	size_t	passed = 0;
	size_t	target = 1;
	int		c = 0;
	int		fail = 0;

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
		passed++;
	}
	evaluate(target, passed);
	if (fail)
		printf("\tYour ft_isascii failed with input: %c\n", c);
}
