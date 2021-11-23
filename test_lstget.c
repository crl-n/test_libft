/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstget.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:31:36 by cnysten           #+#    #+#             */
/*   Updated: 2021/11/23 15:47:09 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_lstget(void)
{
	size_t	passed = 0;
	size_t	target = 3;
	t_list	*lst = NULL;
	int		i1 = 42;
	int		i2 = 21;
	int		i3 = 7;

	print_function("FT_LSTGET");

	//if (ft_lstget(lst, 1) == NULL)
	//	passed++;

	// Test empty list
	test_lst(NULL, ft_lstget(lst, 1), &passed);

	lst = ft_lstnew(&i1, sizeof (int));
	ft_lstadd(&lst, ft_lstnew(&i2, sizeof (int)));
	ft_lstadd(&lst, ft_lstnew(&i3, sizeof (int)));

	test_lst(lst->next, ft_lstget(lst, 1), &passed);
	test_lst(lst->next->next, ft_lstget(lst, 2), &passed);
	/*
	if (ft_lstget(lst, 0) == lst)
		passed++;

	if (ft_lstget(lst, 1) == lst->next)
		passed++;

	if (ft_lstget(lst, 2) == lst->next->next)
		passed++;

	if (ft_lstget(lst, 5) == NULL)
		passed++;
	*/
	evaluate(target, passed);
}
