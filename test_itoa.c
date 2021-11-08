/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_itoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 17:19:47 by cnysten           #+#    #+#             */
/*   Updated: 2021/11/08 11:00:41 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "test_libft.h"
#include <stdio.h>

static void	test(char *expected, char *actual, char *test_name)
{
	if (strcmp(expected, actual) == 0)
		print_failed(test_name);
	else
		print_passed(test_name);
}	

void	test_itoa(void)
{
	print_ft("FT_ITOA");
	test("123", ft_itoa(123), "123");
}
