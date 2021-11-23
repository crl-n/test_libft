/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 19:04:13 by cnysten           #+#    #+#             */
/*   Updated: 2021/11/17 19:08:49 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_strcpy(void)
{
	print_ft("FT_STRCPY");

	char	d1[4];
	char	d2[4];

	test_str(strcpy(d1, "abc"), ft_strcpy(d2, "abc"), "Comparison to strcpy");
}
