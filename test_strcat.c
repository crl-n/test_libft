/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strcat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:24:30 by cnysten           #+#    #+#             */
/*   Updated: 2021/11/17 16:27:03 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_strcat(void)
{
	print_ft("FT_STRCAT");

	char	s1[4] = "abc";
	char	s2[4] = "def";
	test_str("abcdef", ft_strcat(s1, s2), "abc + def = abcdef");
}
