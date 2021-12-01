/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstget.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:31:36 by cnysten           #+#    #+#             */
/*   Updated: 2021/12/01 22:33:01 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_lstget(void)
{
	t_test	*test = new_test();
	t_list	*lst = NULL;
	int		i1 = 42;
	int		i2 = 21;
	int		i3 = 7;

	print_function("FT_LSTGET");

	//if (ft_lstget(lst, 1) == NULL)
	//	passed++;

	// Test empty list
	test_lst(NULL, ft_lstget(lst, 1), test);

	lst = ft_lstnew(&i1, sizeof (int));
	ft_lstadd_back(&lst, ft_lstnew(&i2, sizeof (int)));
	ft_lstadd_back(&lst, ft_lstnew(&i3, sizeof (int)));

	test_lst(lst->next, ft_lstget(lst, 1), test);
	test_lst(lst->next->next, ft_lstget(lst, 2), test);
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
	evaluate(test);
	free(test);
	free_list(&lst);
}
