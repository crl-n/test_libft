/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstadd_back.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:15:34 by cnysten           #+#    #+#             */
/*   Updated: 2021/12/01 16:44:55 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_lstadd_back(void)
{
	t_list	*lst = NULL;
	t_list	*new = ft_lstnew("Moi.", 5);
	t_list	*new2 = ft_lstnew("Hei.", 5);
	t_test	*test = new_test();

	print_function("FT_LSTADD_BACK");

	// Test adding to empty list
	ft_lstadd_back(&lst, new);
	test_lst(new, lst, test);

	// Test adding to non-empty list
	ft_lstadd_back(&lst, new2);
	test_lst(new2, lst->next, test);

	evaluate(test);
}
