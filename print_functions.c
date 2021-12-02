/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 14:42:54 by cnysten           #+#    #+#             */
/*   Updated: 2021/12/02 11:37:00 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	print_banner(void)
{
	printf(BLU "************************************************************\n\n" RESET);
	printf("\t\t\tLIBFT TESTS\n\n");
	printf(BLU "************************************************************\n\n" RESET);
}

void	print_part_one(void)
{
	printf(YEL "\n\n************************************************************\n\n" RESET);
	printf("\t\t\tPART ONE\n\n");
	printf(YEL "************************************************************\n\n" RESET);
}

void	print_additional(void)
{
	printf(YEL "\n\n************************************************************\n\n" RESET);
	printf("\t\tADDITIONAL FUNCTIONS\n\n");
	printf(YEL "************************************************************\n\n" RESET);
}

void	print_bonus(void)
{
	printf(YEL "\n\n************************************************************\n\n" RESET);
	printf("\t\t\tBONUS\n\n");
	printf(YEL "************************************************************\n\n" RESET);
}

void	print_ft(char *ft_name)
{
	printf("\x1B[35m");
	printf("%s\n", ft_name);
	printf("\033[0;37m");
}

void	print_function(char *ft_name)
{
	printf("%s\t" RESET, ft_name);
	if (strlen(ft_name) < 8)
		printf("\t");
}

void	print_failed(char *test_name)
{
	printf(" • %s \033[0;31m[𝙭]\n", test_name);
	printf("\033[0;37m");
}

void	print_fail(void)
{
	printf(RED "✦ " RESET);
}

void	print_passed(char *test_name)
{
	printf(" • %s \033[0;32m[✓]\n", test_name);
	printf("\033[0;37m");
}

void	print_pass(void)
{
	printf(GRN "• " RESET);
}

void	print_arr(int *arr, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
		printf("%d, ", arr[i++]);
	printf("\n");
}

void	print_str_arr(char **arr)
{
	while (*arr != NULL)
	{
		printf("\"%s\", ", *arr);
		arr++;
	}
	printf("\n");
}
