/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalnum.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 09:16:20 by cnysten           #+#    #+#             */
/*   Updated: 2021/11/26 09:16:23 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_isalnum(void)
{
	size_t	passed = 0;
	size_t	target = 1;
	int		c = 0;
	int		fail = 0;

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
		passed++;
	}
	evaluate(target, passed);
}
