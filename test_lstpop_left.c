/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstpop_left.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:46:46 by cnysten           #+#    #+#             */
/*   Updated: 2021/12/01 22:49:26 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_lstpop_left(void)
{
	t_test	*test = new_test();

	t_list	*lst = NULL;
	t_list	*new1 = ft_lstnew("Moi.", 5);
	t_list	*new2 = ft_lstnew("Hei.", 5);

	print_function("FT_LSTPOP_LEFT");

	// Test on empty list
	test_lst(NULL, ft_lstpop_left(&lst), test);

	// Test on non-empty list
	ft_lstadd(&lst, new1);
	ft_lstadd(&lst, new2);
	test_lst(new2, ft_lstpop_left(&lst), test);
	test_lst(new1, ft_lstpop_left(&lst), test);

	evaluate(test);
	free(test);
	free(new2->content);
	free(new2);
	free(new1->content);
	free(new1);
	free(lst);
}
