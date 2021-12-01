/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstdel.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 15:49:53 by cnysten           #+#    #+#             */
/*   Updated: 2021/12/01 17:07:16 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

static void	del(void *ptr, size_t size)
{
	(void) size;
	free(ptr);
}

void	test_lstdel(void)
{
	print_function("FT_LSTDEL");

	t_list	*lst = ft_lstnew("Delete this whole thing", 23);
	t_list	*node1 = ft_lstnew("Delete this whole thing", 23);
	t_list	*node2 = ft_lstnew("Delete this whole thing", 23);
	lst->next = node1;
	node1->next = node2;
	ft_lstdel(&lst, del);
}
