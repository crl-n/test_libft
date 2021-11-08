/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:21:22 by cnysten           #+#    #+#             */
/*   Updated: 2021/11/08 13:02:57 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

// This function is not in use atm
/*
static void	print_arr(int *arr, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
		printf("%d, ", arr[i++]);
	printf("\n");
}
*/
static void	test_adress_is_same(void *expected, void *actual, char *test_name)
{
	if (expected != actual)
		print_failed(test_name);
	else
		print_passed(test_name);
}


static void	test_string_is_same(void *expected, void *actual, char *test_name)
{
	if (strcmp(expected, actual) != 0)
		print_failed(test_name);
	else
		print_passed(test_name);
}

void	test_memset(void)
{
	print_ft("FT_MEMSET");
	// Test if memset behaves like ft_memset
	char	charArr[10] = "Hello.";
	char	charArr2[10] = "Hello.";
	char	*result = (char *) malloc(10 * sizeof (char));
	if (!result)
		return ;
	result = ft_memset(charArr, 'x', 5);
	printf("adr charArr: %p, adr res: %p\n", &charArr, &result);
	printf("charArr: %s, result: %s\n", charArr, result);
	test_string_is_same(result, memset(charArr2, 'x', 5), "\"Hello.\" to \"xxxxx.\"");
	test_adress_is_same(charArr, result, "Pointers are the same");
}

/*
int	main(void)
{
	int	intArr[10];
	int	intArr2[10];
	ft_memset(intArr, 0, 10);

	memset(intArr2, 0, 10);

	print_arr(intArr, 10);
	print_arr(intArr2, 10);

	printf("%s\n", charArr);
	printf("%s\n", charArr2);

	return (0);
}
*/
