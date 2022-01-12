/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 14:36:32 by cnysten           #+#    #+#             */
/*   Updated: 2021/12/07 18:21:57 by cnysten          ###   ########.fr       */
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
	//if (!expected || !actual || !test)
	//	return (-1);
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

int		test_char(char expected, char actual, t_test *test)
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

int		test_sign(int expected, int actual, t_test * test)
{
	(test->target)++;
	if ((expected == 0 &&  actual == 0)
	|| (expected < 0 &&  actual < 0)
	|| (expected > 0 &&  actual > 0))
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

void	test_diff_adr(void *original, void *actual, t_test *test)
{
	(test->target)++;
	if (original == actual)
	{
		print_fail();
	}
	else
	{
		test->passed++;
		print_pass();
	}
}

void	test_str_arr(char **expected, char **actual, size_t len, t_test *test)
{
	size_t	i;

	(test->target)++;
	i = 0;
	while (i < len)
	{
		if (strcmp(expected[i], actual[i]) != 0)
		{
			print_fail();
			return ;
		}
		i++;
	}
	test->passed++;
	print_pass();
}

