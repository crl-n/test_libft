/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstpop.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:52:02 by cnysten           #+#    #+#             */
/*   Updated: 2021/12/01 16:47:58 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_lstpop(void)
{
	t_test	*test = new_test();
	t_list	*lst = NULL;
	int		i1 = 1;

	print_function("FT_LSTPOP");

	// Test empty list
	test_lst(NULL, ft_lstpop(&lst), test);

	// Add node, pop and test return and if empty
	lst = ft_lstnew(&i1, sizeof (int));
	t_list *temp = lst;
	test_lst(temp, ft_lstpop(&lst), test);
	test_lst(NULL, lst, test);
	
	evaluate(test);
}
