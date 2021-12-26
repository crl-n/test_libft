/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strsub.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 15:41:12 by cnysten           #+#    #+#             */
/*   Updated: 2021/12/07 18:23:39 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_strsub(void)
{
	t_test	*test = new_test();

	print_function("FT_STRSUB");
	
	char	*s1 = ft_strsub("abcdef", 0, 6);
	char	*s2 = ft_strsub("abcdef", 3, 6);
	char	*s3 = ft_strsub("abcxyzdef", 3, 3);
	char	*s4 = ft_strsub("420xyz", 1, 0);
	char	*s5 = ft_strsub(NULL, 1, 3);

	test_string("abcdef", s1, test);
	test_string("def", s2, test);
	test_string("xyz", s3, test);
	test_string("", s4, test);
	test_address(NULL, s5, test);

	evaluate(test);
	free(test);
	free(s1);
	free(s2);
	free(s3);
	free(s4);
	free(s5);
}
