/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   other_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:43:37 by cnysten           #+#    #+#             */
/*   Updated: 2021/12/01 16:56:15 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

t_test	*new_test(void)
{
	t_test	*test;

	test = (t_test *) malloc(sizeof (t_test));
	if (!test)
		return (NULL);
	test->target = 0;
	test->passed = 0;
	return (test);
}

void	evaluate(t_test *test)
{
	if (test->target < 4)
		printf("\t");
	if (test->passed == test->target)
		puts("\tPassed!");
	else
		puts("\tFailed.");
}
