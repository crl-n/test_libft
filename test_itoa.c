/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_itoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 17:19:47 by cnysten           #+#    #+#             */
/*   Updated: 2021/11/08 14:27:15 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

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
	char	*itoa = ft_itoa(123);
	test("123", itoa, "123");
	free(itoa);
}
