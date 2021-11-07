/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_itoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 17:19:47 by cnysten           #+#    #+#             */
/*   Updated: 2021/11/07 18:09:38 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static void	test(char *expected, char *actual, char *test_name)
{
	if (strcmp(expected, actual) == 0)
		printf("%s failed", test_name);
	else
		printf("%s passed", test_name);
	puts("\n");
}	

void	test_itoa(void)
{
	printf("FT_ITOA\n");
	test("123", ft_itoa(123), "123");
}
