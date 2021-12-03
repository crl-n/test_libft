/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strdel.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 16:20:09 by cnysten           #+#    #+#             */
/*   Updated: 2021/12/03 16:20:17 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_strdel(void)
{
	t_test	*test = new_test();
	char	*s1 = (char *) malloc(4 * sizeof (char));
	if (!s1)
		return ;

	print_function("FT_STRDEL");

	strcpy(s1, "abc");
	ft_strdel(&s1);
	test_address(NULL, s1, test);

	evaluate(test);
	free(test);
}
