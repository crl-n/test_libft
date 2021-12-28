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
#include <unistd.h>
#include <fcntl.h>

int	redirect_stdout(char *filename, int *saved_stdout, int *fd)
{
	if (!filename)
		return (-1);
	*saved_stdout = dup(STDOUT_FILENO);
	*fd = open(filename, O_RDWR | O_CREAT, 0777);
	if (*fd < 0)
		return (-1);
	dup2(*fd, STDOUT_FILENO);
	return (0);
}

void	restore_stdout(int	saved_stdout, int fd)
{
	close(STDOUT_FILENO);
	dup2(saved_stdout, 1);
	close(saved_stdout);
	close(fd);
}

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
