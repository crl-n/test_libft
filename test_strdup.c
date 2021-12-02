/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 23:07:57 by cnysten           #+#    #+#             */
/*   Updated: 2021/12/01 23:08:37 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_strdup(void)
{
	t_test	*test = new_test();
	char	*s1 = strdup("OK");
	char	*s2 = ft_strdup("OK");

	print_function("FT_STRDUP");

	test_string(s1, s2, test);

	evaluate(test);
	free(s1);
	free(s2);
	free(test);
}
