/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_itoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 17:19:47 by cnysten           #+#    #+#             */
/*   Updated: 2021/12/01 17:07:14 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_itoa(void)
{
	t_test	*test = new_test();
	char	*s1 = ft_itoa(123);
	char	*s2 = ft_itoa(-123);
	char	*s3 = ft_itoa(0);
	char	*s4 = ft_itoa(2147483647);
	char	*s5 = ft_itoa(-2147483648);

	print_function("FT_ITOA");

	if (!test_string("123", s1, test))
		printf("ft_itoa(123): %s\n", s1);
	if (!test_string("-123", s2, test))
		printf("ft_itoa(-123): %s\n", s2);
	if (!test_string("0", s3, test))
		printf("ft_itoa(0): %s\n", s3);
	if (!test_string("2147483647", s4, test))
		printf("ft_itoa(2147483647): %s\n", s4);
	if (!test_string("-2147483648", s5, test))
		printf("ft_itoa(-2147483648): %s\n", s5);

	evluate(test);

	free(test);
	free(s1);
	free(s2);
	free(s3);
	free(s4);
	free(s5);
}
