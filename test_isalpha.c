/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:08:27 by cnysten           #+#    #+#             */
/*   Updated: 2021/11/26 09:32:00 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_isalpha(void)
{
	size_t	passed = 0;
	size_t	target = 1;
	int		c = 0;
	int		fail = 0;

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
		passed++;
	}
	evaluate(target, passed);
	if (fail)
		printf("\tYour ft_isalpha failed with input: %c\n", c);
}
