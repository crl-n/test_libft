/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_striter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 18:33:43 by cnysten           #+#    #+#             */
/*   Updated: 2021/12/06 18:33:46 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

static void	f(char *c)
{
	*c = 'b';
}

void	test_striter(void)
{
	t_test	*test = new_test();
	char	s[] = "aaaa";

	print_function("FT_STRITER");

	ft_striter(s, f);
	test_string("bbbb", s, test);

	evaluate(test);
	free(test);
}
