/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 08:49:49 by cnysten           #+#    #+#             */
/*   Updated: 2021/12/02 11:32:46 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

void	test_putnbr(void)
{
	t_test	*test = new_test();
	int		fd;
	int		saved_stdout;
	FILE	*file;

	print_function("FT_PUTNBR");

	// Redirect stdout to file
	if (redirect_stdout("putnbr_output", &saved_stdout, &fd) < 0)
	{
		free(test);
		return ;
	}

	// Test cases
	ft_putnbr(-42);
	ft_putchar('\n');

	ft_putnbr(0);
	ft_putchar('\n');

	ft_putnbr(182059);
	ft_putchar('\n');

	ft_putnbr(2147483647);
	ft_putchar('\n');

	ft_putnbr(-2147483648);

	// Close file and restore stdout
	restore_stdout(saved_stdout, fd);

	// Open and read output file
	file = fopen("putnbr_output", "r");
	if (!file)
		printf("%s", strerror(errno));
	else
	{
		size_t	linecap = 0;
		char	*line = NULL;
		char	*lines[5];
		size_t	i = 0;
		while (getline(&line, &linecap, file) > 0)
			lines[i++] = strdup(line);
		fclose(file);
		test_string("-42\n", lines[0], test);
		test_string("0\n", lines[1], test);
		test_string("182059\n", lines[2], test);
		test_string("2147483647\n", lines[3], test);
		test_string("-2147483648", lines[4], test);
		i--;
		while (i)
			free(lines[i--]);
	}

	evaluate(test);
	free(test);
}
