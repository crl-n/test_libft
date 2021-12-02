/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strrchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 11:34:04 by cnysten           #+#    #+#             */
/*   Updated: 2021/12/02 11:36:35 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_strrchr(void)
{
	t_test	*test = new_test();
	char	s1[] = "aaaa";
	char	s2[] = "abab";

	print_function("FT_STRRCHR");

	test_string(strrchr(s1, 'a'), strrchr(s1, 'a'), test);
	test_string(strrchr(s2, 'a'), strrchr(s2, 'a'), test);

	evaluate(test);
	free(test);
}
