/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_libft.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 18:05:28 by cnysten           #+#    #+#             */
/*   Updated: 2021/11/08 11:06:29 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "test_libft.h"
#include <stdio.h>

void	print_banner(void)
{
	printf("\033[0;34m");
	printf("************************************************************\n\n");
	printf("\033[0;37m");
	printf("\t\t\tLIBFT TESTS\n\n");
	printf("\033[0;34m");
	printf("************************************************************\n\n");
	printf("\033[0;37m");
}

void	print_ft(char *ft_name)
{
	printf("\033[0;35m");
	printf("%s\n", ft_name);
	printf("\033[0;37m");
}

void	print_failed(char *test_name)
{
	printf("\033[0;31m");
	printf(" • %s failed\n", test_name);
	printf("\033[0;37m");
}

void	print_passed(char *test_name)
{
	printf("\033[0;32m");
	printf(" • %s passed\n", test_name);
	printf("\033[0;37m");
}

int	main(void)
{
	print_banner();
	test_itoa();
	return (0);
}
