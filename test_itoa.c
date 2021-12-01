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
	char	*s1 = ft_itoa(123);
	char	*s2 = ft_itoa(-123);
	char	*s3 = ft_itoa(0);
	char	*s4 = ft_itoa(2147483647);
	char	*s5 = ft_itoa(-2147483648);
	print_function("FT_ITOA");

	test_str("123", s1, "123");
	test_str("-123", s2, "-123");
	//printf("ft_itoa(-123): %s\n", ft_itoa(-123));
	test_str("0", s3, "0");
	test_str("2147483647", s4, "MAX INT");
	test_str("-2147483648", s5, "MIN INT");
	//printf("ft_itoa(-2147483648): %s\n", ft_itoa(-2147483648));
	
	free(s1);
	free(s2);
	free(s3);
	free(s4);
	free(s5);

}
