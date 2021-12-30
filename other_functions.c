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
#include <errno.h>

void	free_str_arr(char **arr, size_t n)
{
	size_t	i = 0;

	while (i < n)
		free(arr[i++]);
	free(arr);
}

/*
*	file_to_str_arr() creates a array or strings out of a file's lines.
*/

char	**file_to_str_arr(char *filename, size_t n)
{
	size_t	linecap = 0;
	char	*line = NULL;
	char	**lines;
	size_t	i = 0;
	FILE	*file;

	file = fopen(filename, "r");
	if (!file)
	{
		printf("%s", strerror(errno));
		return (NULL);
	}
	lines = (char **) malloc(sizeof (char *) * n);
	if (!lines)
	{
		perror("memory could not be allocated for lines");
		fclose(file);
		return (NULL);
	}
	ssize_t	ret = 0;
	while (i < n)
	{
		line = NULL;
		ret = getline(&line, &linecap, file);
		lines[i] = line;
		i++;
		if (ret < 1)
			break ;
	}
	fclose(file);
	return (lines);
}

/*
*	redirect_stdout() opens a file and redirects stdout to write to it.
*/

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

/*
* restore_stdout() undoes the redirection of stdout done by redirect_stdout(). The file descriptor fd should designate the file stdout was redirected to.
*/

void	restore_stdout(int	saved_stdout, int fd)
{
	close(STDOUT_FILENO);
	dup2(saved_stdout, 1);
	close(saved_stdout);
	close(fd);
}

/*
* free_list() frees all the nodes of a linked list.
*/

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
	size_t	n = 38 - (test->target * 2);
	char	pad[n];

	memset(pad, ' ', n);
	pad[n - 1] = '\0';
	if (test->passed == test->target)
		printf("%s%s\n", pad, "Passed!");
	else
		printf("%s%s\n", pad, "Failed.");
}
