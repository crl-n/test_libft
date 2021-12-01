/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 19:04:13 by cnysten           #+#    #+#             */
/*   Updated: 2021/12/01 17:48:47 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_strcpy(void)
{
	t_test	*test = new_test();

	print_function("FT_STRCPY");

	char	d1[4];
	char	d2[4];

	//test_str(strcpy(d1, "abc"), ft_strcpy(d2, "abc"), "Comparison to strcpy");
	test_string(strcpy(d1, "abc"), ft_strcpy(d2, "abc"), test);
	evaluate(test);
	
}
