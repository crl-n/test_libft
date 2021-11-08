/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:21:22 by cnysten           #+#    #+#             */
/*   Updated: 2021/11/08 14:56:17 by cnysten          ###   ########.fr       */
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
static void	test_adr(void *expected, void *actual, char *test_name)
{
	if (expected != actual)
		print_failed(test_name);
	else
		print_passed(test_name);
}


static void	test_str(void *expected, void *actual, char *test_name)
{
	if (strcmp(expected, actual) != 0)
		print_failed(test_name);
	else
		print_passed(test_name);
}

static void	test_mem(void *expected, void *actual, char *test_name)
{
	if (memcmp(expected, actual, (size_t)(sizeof (actual))) != 0)
		print_failed(test_name);
	else
		print_passed(test_name);
}

void	test_memset(void)
{
	print_ft("FT_MEMSET");

	// Test if ft_memset behaves like memset with string
	// and test if ft_memset returns the org pointer.
	char	charArr[10] = "Hello.";
	char	charArr2[10] = "Hello.";
	char	*result = ft_memset(charArr, 'x', 5);
	char	*result2 = memset(charArr2, 'x', 5);

	test_str(result2, result, "\"Hello.\" to \"xxxxx.\"");
	test_adr(charArr, result, "Pointers are the same");
	printf("adr. in: %p, adr. out: %p\n", charArr, result);
	printf("memset: %s, ft_memset: %s\n", result, result2);

	// Test with null pointer
	test_adr(memset(NULL, 0, 0), ft_memset(NULL, 0, 0), "Null returns null.");
	printf("adr. in: %p, adr. out: %p\n", NULL, ft_memset(NULL, 0, 0));

	// Test with raw memory and int array
	int	intArr[] = {1, 2, 3};
	int	intArr2[] = {1, 2, 3};
	int	*intRes = ft_memset(intArr, 9, 3);
	int	*intRes2 = memset(intArr2, 9, 3);

	test_mem(intRes2, intRes, "123 to 999");
}
