/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstdelone.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 13:48:08 by cnysten           #+#    #+#             */
/*   Updated: 2021/12/07 14:14:07 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

static void	del(void *ptr, size_t size)
{
	(void) size;
	free(ptr);
}

void	test_lstdelone(void)
{
	t_test	*test = new_test();
	print_function("FT_LSTDELONE");

	t_list	*lst1 = ft_lstnew("Delete this", 12);
	ft_lstdelone(&lst1, del);
	test_address(NULL, lst1, test);
	evaluate(test);
	free(test);
}
