/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 23:13:41 by cnysten           #+#    #+#             */
/*   Updated: 2021/12/01 23:14:32 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_strlen(void)
{
	t_test	*test = new_test();

	print_function("FT_STRLEN");

	test_size(strlen("abcd"), ft_strlen("abcd"), test);
	test_size(strlen(""), ft_strlen(""), test);

	evaluate(test);
	free(test);
}
