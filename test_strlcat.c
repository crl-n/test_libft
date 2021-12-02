/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 11:14:11 by cnysten           #+#    #+#             */
/*   Updated: 2021/12/02 11:16:29 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_strlcat(void)
{
	t_test	*test = new_test();
	char	s1[] = "xyz";
	char	s2[] = "xyz";
	char	d1[10] = "abc";
	char	d2[10] = "abc";

	print_function("FT_STRLCAT");

	strlcat(d1, s1, 10);
	ft_strlcat(d2, s2, 10);
	test_string(d1, d2, test);
	evaluate(test);
	free(test);
}
