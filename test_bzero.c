/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 13:58:14 by cnysten           #+#    #+#             */
/*   Updated: 2021/12/03 19:01:44 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_bzero(void)
{
	t_test	*test = new_test();
	char	*s1 = strdup("aaaa");
	char	*s2 = strdup("aaaa");

	print_function("FT_BZERO");

	// Test that bzero zeroes bytes
	bzero(s1, 2);
	ft_bzero(s2, 2);
	test_memory(s1, s2, test);

	// Test that strlen gives 0
	test_size(0, strlen(s1), test);

	evaluate(test);
	free(test);
	free(s1);
	free(s2);
}
