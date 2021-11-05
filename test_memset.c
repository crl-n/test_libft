/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:21:22 by cnysten           #+#    #+#             */
/*   Updated: 2021/11/01 17:03:32 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <stdio.h>
#include <string.h>

void	*ft_memset(void *ptr, int x, size_t n);

static void	print_arr(int *arr, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
		printf("%d, ", arr[i++]);
	printf("\n");
}


int	main(void)
{
	int	intArr[10];
	int	intArr2[10];
	char	charArr[10] = "Hello.";
	char	charArr2[10] = "Hello.";

	ft_memset(intArr, 0, 10);
	ft_memset(charArr, 'x', 5);

	memset(intArr2, 0, 10);
	memset(charArr2, 'x', 5);

	print_arr(intArr, 10);
	print_arr(intArr2, 10);

	printf("%s\n", charArr);
	printf("%s\n", charArr2);

	return (0);
}
