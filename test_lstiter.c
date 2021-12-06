/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstiter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 13:18:25 by cnysten           #+#    #+#             */
/*   Updated: 2021/12/01 17:07:18 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

static void	f(t_list *elem)
{
	strcpy(elem->content, "OK");
}

void	test_lstiter(void)
{
	t_test	*test = new_test();
	t_list	*lst = ft_lstnew("KO", 3);

	print_function("FT_LSTITER");

	ft_lstadd(lst, ft_lstnew("KO", 3);
	ft_lstadd(lst, ft_lstnew("KO", 3);

	ft_lstiter(lst, f);

	test_string("OK", lst->content, test);
	test_string("OK", lst->next->content, test);
	test_string("OK", lst->next->next->content, test);

	evaluate(test);
	free(test);
}
