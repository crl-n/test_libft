/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strmapi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 13:53:39 by cnysten           #+#    #+#             */
/*   Updated: 2021/12/08 13:53:42 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_strmapi(void)
{
	t_test	*test = new_test();

	print_function("FT_STRMAPI");

	evaluate(test);
	free(test);
}
