/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 19:04:13 by cnysten           #+#    #+#             */
/*   Updated: 2021/12/01 17:45:19 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_strncpy(void)
{
	t_test	*test = new_test();

	print_function("FT_STRNCPY");

	char	*d1;
	char	*d2;

	d1 = (char *) malloc(4 * sizeof (char));
	d2 = (char *) malloc(4 * sizeof (char));
	strncpy(d1, "abc", 4);
	ft_strncpy(d2, "abc", 4);

	test_string(d1, d2, test);

	evaluate(test);

	free(d1);
	free(d2);
	
}
