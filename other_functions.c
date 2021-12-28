/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   other_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:43:37 by cnysten           #+#    #+#             */
/*   Updated: 2021/12/01 23:11:55 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	free_list(t_list **head)
{
	t_list	*next;
	t_list	*node;

	node = *head;
	while (node)
	{
		free(node->content);
		next = node->next;
		free(node);
		node = next;
	}
	*head = NULL;
}


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
	if (test->passed == test->target)
		printf("%24s\n", "Passed!");
	else
		printf("%24s\n", "Failed.");
}
