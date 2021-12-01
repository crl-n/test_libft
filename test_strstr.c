/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 20:42:04 by cnysten           #+#    #+#             */
/*   Updated: 2021/12/01 17:07:53 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_strstr(void)
{
	print_function("FT_STRSTR");

	char	s1[37] = "You should find THIS instead of THIS";
	char	s2[5] = "THIS";

	printf("%s\n", ft_strstr(s1, s2));
}
