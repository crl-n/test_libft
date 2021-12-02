/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 10:58:16 by cnysten           #+#    #+#             */
/*   Updated: 2021/12/02 11:02:32 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_memmove(void)
{
	t_test	*test = new_test();
	char	s1[] = "abcdefxyz";
	char	s2[] = "abcdefxyz";

	print_function("FT_MEMMOVE");

	memmove(s1, (s1 + 2), 5);
	ft_memmove(s2, (s2 + 2), 5);
	test_string(s1, s2, test);
	evaluate(test);
	free(test);
}
