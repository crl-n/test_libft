/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 11:04:17 by cnysten           #+#    #+#             */
/*   Updated: 2021/12/02 11:07:30 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_memchr(void)
{
	t_test	*test = new_test();
	char	s1[] = "abcd";

	print_function("FT_MEMCHR");

	test_address(memchr(s1, 'b', 5), memchr(s1,'b', 5), test);
	evaluate(test);
	free(test);
}
