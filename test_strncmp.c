/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strncmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 11:38:07 by cnysten           #+#    #+#             */
/*   Updated: 2021/12/02 11:39:47 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_strncmp(void)
{
	t_test	*test = new_test();
	char	s1[] = "abcd";
	char	s2[] = "abbb";

	print_function("FT_STRNCMP");

	test_integer(strncmp(s1, s2, 2), ft_strncmp(s1, s2, 2), test);
	test_integer(strncmp(s1, s2, 3), ft_strncmp(s1, s2, 3), test);

	evaluate(test);
	free(test);
}
