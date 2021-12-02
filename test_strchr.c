/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 11:17:28 by cnysten           #+#    #+#             */
/*   Updated: 2021/12/02 11:19:53 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_strchr(void)
{
	t_test	*test = new_test();
	char	s1[] = "abcde";
	char	s2[] = "aaaaa";

	print_function("FT_STRCHR");

	test_string(strchr(s1, 'c'), ft_strchr(s1, 'c'), test);
	test_string(strchr(s2, 'a'), ft_strchr(s2, 'a'), test);

	evaluate(test);
	free(test);
}
