/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memalloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 10:45:11 by cnysten           #+#    #+#             */
/*   Updated: 2021/12/06 18:42:42 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_memalloc(void)
{
	t_test	*test = new_test();
	char	*s1 = (char *) ft_memalloc(5);
	char	*s2 = (char *) malloc(5 * sizeof (char));

	print_function("FT_MEMALLOC");

	bzero((void *) s2, 5);
	test_string(s2, s1, test);

	evaluate(test);
	free(test);
	if (s1)
		free(s1);
	if (s2)
		free(s2);
}
