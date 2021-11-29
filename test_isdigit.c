/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isdigit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 09:15:59 by cnysten           #+#    #+#             */
/*   Updated: 2021/11/26 09:17:11 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_isdigit(void)
{
	size_t	passed = 0;
	size_t	target = 1;
	int		c = 0;
	int		fail = 0;

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
		passed++;
	}
	evaluate(target, passed);
}
