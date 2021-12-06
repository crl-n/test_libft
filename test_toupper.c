/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_toupper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 18:55:15 by cnysten           #+#    #+#             */
/*   Updated: 2021/12/06 19:01:18 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_toupper(void)
{
	t_test	*test = new_test();

	print_function("FT_TOUPPER");

	test_char('A', ft_toupper('a'), test);

	evaluate(test);
	free(test);
}
