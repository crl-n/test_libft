/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memdel.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 16:21:49 by cnysten           #+#    #+#             */
/*   Updated: 2021/12/03 16:37:40 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_memdel(void)
{
	t_test	*test = new_test();
	char	*m1 = (char *) malloc(5);

	print_function("FT_MEMDEL");

	ft_memdel((void *) &m1);
	test_address(NULL, m1, test);

	evaluate(test);
	free(test);
}
