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
//#include <fcntl.h>
//#include <unistd.h>
#include <errno.h>

void	test_putnbr(void)
{
	t_test	*test = new_test();
	int		fd;
	int		saved_stdout;

	print_function("FT_PUTNBR");

	// Redirect stdout to file
	if (redirect_stdout("putnbr_output", &saved_stdout, &fd) < 0)
	{
		free(test);
		return ;
	}

	// Print to file
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

	// Create array of strings from file
	char **lines = file_to_str_arr("putnbr_output", 5);

	// Test cases
	test_string("-42\n", lines[0], test);
	test_string("0\n", lines[1], test);
	test_string("182059\n", lines[2], test);
	test_string("2147483647\n", lines[3], test);
	test_string("-2147483648", lines[4], test);

	// Clean up
	free_str_arr(lines, 5);
	evaluate(test);
	free(test);
}
