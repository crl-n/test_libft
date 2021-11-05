/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memalloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 10:45:11 by cnysten           #+#    #+#             */
/*   Updated: 2021/11/04 13:19:36 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	int		*arr;
	long	*larr;
	int		a;

	arr = ft_memalloc(4 * sizeof (int));
	larr = ft_memalloc(4 * sizeof (long));

	for (size_t i = 0; i < 4; i++)
		printf("%d ", arr[i]);
	printf("\n");
	for (size_t i = 0; i < 4; i++)
		printf("%ld ", larr[i]);
	ft_putchar('\n');
	free(arr);
	while (1)
		a = 1 + 1;
	return (0);
}
