/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 13:58:14 by cnysten           #+#    #+#             */
/*   Updated: 2021/12/01 16:32:36 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_bzero(void)
{
	size_t	passed = 0;
	size_t	taget = 0;
	char	*s1 = strdup("aaaa");

	print_function("FT_BZERO");

	// Test that strlen gives 0
	test_size(0, strlen(s1), test, &target);

	// Test that bzero zeroes bytes
	test_memory("\0\0\0\0", ft_bzero(s1), 5);

	evaluate(test);

}
