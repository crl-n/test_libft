/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 20:42:04 by cnysten           #+#    #+#             */
/*   Updated: 2021/12/02 13:13:28 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_strstr(void)
{
	t_test	*test = new_test();
	char	s1[37] = "You should find THIS instead of THIS";
	char	s2[5] = "THIS";

	print_function("FT_STRSTR");

	test_string(strstr(s1, s2), ft_strstr(s1, s2), test);

	evaluate(test);
	free(test);
}
