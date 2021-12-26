/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strjoin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:16:39 by cnysten           #+#    #+#             */
/*   Updated: 2021/12/07 18:16:50 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_strjoin(void)
{
	t_test	*test = new_test();
	print_function("FT_STRJOIN");

	char	*s1 = ft_strjoin("Nyan", "cat");
	test_string("Nyancat", s1, test);
	free(s1);
	evaluate(test);
	free(test);
}
