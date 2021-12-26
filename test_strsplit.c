/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strsplit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 17:30:50 by cnysten           #+#    #+#             */
/*   Updated: 2021/12/07 18:19:24 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

static char**	free_str_arr(char **arr, size_t len)
{
	for (size_t i = 0; i < len; i++)
	{
		free(arr[i]);
	}
	free(arr);
	return (NULL);
}

void	test_strsplit(void)
{
	t_test	*test = new_test();
	char	**r1 = ft_strsplit("*hello*fellow***students*", '*');
	char	*correct1[] = {"hello", "fellow", "students"};
	char	**r2 = ft_strsplit("split  ||it|baby|split|||||||it|", '|');
	char	*correct2[] = {"split  ", "it", "baby", "split", "it"};

	print_function("FT_STRSPLIT");

	test_str_arr(correct1, r1, 3, test);
	//print_str_arr(r1);
	r1 = free_str_arr(r1, 3);
	test_str_arr(correct2, r2, 5, test);
	//print_str_arr(r2);
	r2 = free_str_arr(r2, 5);
	evaluate(test);
	free(test);
}
