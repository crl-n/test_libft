/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 19:04:13 by cnysten           #+#    #+#             */
/*   Updated: 2021/11/18 11:09:21 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_strncpy(void)
{
	print_ft("FT_STRNCPY");

	char	*d1;
	char	*d2;

	d1 = (char *) malloc(4 * sizeof (char));
	d2 = (char *) malloc(4 * sizeof (char));
	strncpy(d1, "abc", 4);
	ft_strncpy(d2, "abc", 4);
	test_str(d1, d2, "Comparison to strncpy");
	free(d1);
	free(d2);
}
