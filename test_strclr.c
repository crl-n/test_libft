/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strclr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 14:10:27 by cnysten           #+#    #+#             */
/*   Updated: 2021/12/01 17:07:41 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_strclr(void)
{
	t_test	*test = new_test();
	char	s1[5] = "ABCD";

	print_function("FT_STRCLR");

	ft_strclr(s1);
	test_memory("\0\0\0\0", s1, test);

	evaluate(test);
	free(test);
}
