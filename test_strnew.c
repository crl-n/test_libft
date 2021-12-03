/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 14:10:27 by cnysten           #+#    #+#             */
/*   Updated: 2021/12/03 16:56:10 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_strnew(void)
{
	t_test	*test = new_test();
	char	*s1;
	void	*s2 = malloc(5);

	print_function("FT_STRNEW");

	bzero(s2, 5);
	s1 = ft_strnew(5);
	test_memory(s2, s1, test);

	evaluate(test);
	free(test);
	free(s1);
	free(s2);
}
