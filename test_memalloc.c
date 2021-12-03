/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memalloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 10:45:11 by cnysten           #+#    #+#             */
/*   Updated: 2021/11/04 13:19:36 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_memalloc(void)
{
	t_test	*test = new_test();
	char	*s1 = (char *) ft_memalloc(5);

	print_function("FT_MEMALLOC");

	test_memory("\0\0\0\0", s1, test);

	evaluate(test);
	free(test);
}
