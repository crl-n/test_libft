/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstpop.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:52:02 by cnysten           #+#    #+#             */
/*   Updated: 2021/11/23 17:06:19 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_lstpop(void)
{
	size_t	passed = 0;
	size_t	target = 3;
	t_list	*lst = NULL;
	int		i1 = 1;

	print_function("FT_LSTPOP");

	// Test empty list
	test_lst(NULL, ft_lstpop(&lst), &passed);

	// Add node, pop and test return and if empty
	lst = ft_lstnew(&i1, sizeof (int));
	t_list *temp = lst;
	test_lst(temp, ft_lstpop(&lst), &passed);
	test_lst(NULL, lst, &passed);
	
	evaluate(target, passed);
}
