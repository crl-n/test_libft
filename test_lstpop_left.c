/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstpop_left.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:46:46 by cnysten           #+#    #+#             */
/*   Updated: 2021/11/23 19:04:58 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_lstpop_left(void)
{
	size_t	passed = 0;
	size_t	target = 3;
	t_list	*lst = NULL;
	t_list	*new1 = ft_lstnew("Moi.", 5);
	t_list	*new2 = ft_lstnew("Hei.", 5);

	print_function("FT_LSTPOP_LEFT");

	// Test on empty list
	test_lst(NULL, ft_lstpop_left(&lst), &passed);

	// Test on non-empty list
	ft_lstadd(&lst, new1);
	ft_lstadd(&lst, new2);
	test_lst(new2, ft_lstpop_left(&lst), &passed);
	test_lst(new1, ft_lstpop_left(&lst), &passed);

	evaluate(target, passed);
}
