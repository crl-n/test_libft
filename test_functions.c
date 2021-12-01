/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 14:36:32 by cnysten           #+#    #+#             */
/*   Updated: 2021/12/01 18:03:18 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

// New test funcs

void	test_lst(t_list *expected, t_list *actual, t_test *test)
{
	(test->target)++;
	if (expected == actual)
	{
		test->passed++;
		print_pass();
	}
	else
		print_fail();
}

void	test_size(size_t expected, size_t actual, t_test *test)
{
	(test->target)++;
	if (expected == actual)
	{
		test->passed++;
		print_pass();
	}
	else
		print_fail();
}

int		test_memory(void *expected, void *actual, t_test *test)
{
	(test->target)++;
	if (memcmp(expected, actual, (size_t)(sizeof (actual))) == 0)
	{
		test->passed++;
		print_pass();
		return (1);
	}
	else
	{
		print_fail();
		return (0);
	}
}

int		test_string(char *expected, char *actual, t_test *test)
{
	(test->target)++;
	if (strcmp(expected, actual) == 0)
	{
		test->passed++;
		print_pass();
		return (1);
	}
	else
	{
		print_fail();
		return (0);
	}
}

int		test_address(void *expected, void *actual, t_test * test)
{
	(test->target)++;
	if (expected == actual)
	{
		test->passed++;
		print_pass();
		return (1);
	}
	else
	{
		print_fail();
		return (0);
	}
}

int		test_integer(int expected, int actual, t_test * test)
{
	(test->target)++;
	if (expected == actual)
	{
		test->passed++;
		print_pass();
		return (1);
	}
	else
	{
		print_fail();
		return (0);
	}
}

// Old test funcs

void	test_int(int expected, int actual, char *test_name)
{
	if (expected != actual)
		print_failed(test_name);
	else
		print_passed(test_name);
}

void	test_size_t(size_t expected, size_t actual, char *test_name)
{
	if (expected != actual)
		print_failed(test_name);
	else
		print_passed(test_name);
}

void	test_str(char *expected, char *actual, char *test_name)
{
	if (strcmp(expected, actual) == 0)
		print_passed(test_name);
	else
		print_failed(test_name);
}

void	test_mem(void *expected, void *actual, char *test_name)
{
	if (memcmp(expected, actual, (size_t)(sizeof (actual))) != 0)
		print_failed(test_name);
	else
		print_passed(test_name);
}

void	test_adr(void *expected, void *actual, char *test_name)
{
	if (expected != actual)
		print_failed(test_name);
	else
		print_passed(test_name);
}

void	test_diff_adr(void *original, void *actual, char *test_name)
{
	if (original == actual)
		print_failed(test_name);
	else
		print_passed(test_name);
}

void	test_str_arr(char **expected, char **actual, size_t len, char *test_name)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		if (strcmp(expected[i], actual[i]) != 0)
		{
			print_failed(test_name);
			return ;
		}
		i++;
	}
	print_passed(test_name);
}
