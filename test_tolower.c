/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_tolower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 19:02:08 by cnysten           #+#    #+#             */
/*   Updated: 2021/12/06 19:02:45 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_tolower(void)
{
	t_test	*test = new_test();

	print_function("FT_TOLOWER");

	test_char('a', ft_tolower('A'), test);

	evaluate(test);
	free(test);
}
