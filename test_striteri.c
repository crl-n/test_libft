/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_striteri.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 18:33:43 by cnysten           #+#    #+#             */
/*   Updated: 2021/12/06 18:52:23 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

static void	f(unsigned int i, char *c)
{
	(void) i;
	*c = 'b';
}

void	test_striteri(void)
{
	t_test	*test = new_test();
	char	s[] = "aaaa";

	print_function("FT_STRITERI");

	ft_striteri(s, f);
	test_string("bbbb", s, test);

	evaluate(test);
	free(test);
}
