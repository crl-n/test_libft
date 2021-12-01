/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 08:49:49 by cnysten           #+#    #+#             */
/*   Updated: 2021/12/01 17:07:32 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_putnbr(void)
{
	print_function("FT_PUTNBR");

	//printf("ft_putnbr(-42) ");
	ft_putnbr(-42);
	ft_putchar('\n');

	//printf("ft_putnbr(0) ");
	ft_putnbr(0);
	ft_putchar('\n');

	//printf("ft_putnbr(182059) ");
	ft_putnbr(182059);
	ft_putchar('\n');

	//printf("ft_putnbr(2147483647) ");
	ft_putnbr(2147483647);
	ft_putchar('\n');

	//printf("ft_putnbr(-2147483648) ");
	//ft_putnbr(-2147483648);
	ft_putchar('\n');
}
