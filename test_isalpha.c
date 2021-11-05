/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:31:54 by cnysten           #+#    #+#             */
/*   Updated: 2021/11/05 15:24:24 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char	c;

	c = (char) 0;
	while (c <= '~')
	{
		printf("char no. %d -> ft: %d, org: %d\n", (int) c, ft_isalpha(c), isalpha(c));
		c++;
	}
	return (0);
}
