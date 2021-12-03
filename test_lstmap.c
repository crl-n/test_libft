/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstmap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 21:51:31 by cnysten           #+#    #+#             */
/*   Updated: 2021/12/01 22:36:14 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

t_list	*ok(t_list *elem)
{
	(void) elem;
	return (ft_lstnew("OK", 3));
}

void	test_lstmap(void)
{
	t_test	*test = new_test();

	print_function("FT_LSTMAP");

	t_list	*head = ft_lstnew("head", 5);
	t_list	*second = ft_lstnew("second", 7);
	t_list	*third = ft_lstnew("third", 6);
	t_list	*new;
	
	head->next = second;
	second->next = third;
	
	new = ft_lstmap(head, ok);

	test_string("OK", new->content, test);
	test_string("OK", (new->next)->content, test);
	test_string("OK", ((new->next)->next)->content, test);
	test_string("head", head->content, test);
	test_string("second", (head->next)->content, test);
	test_string("third", ((head->next)->next)->content, test);

	evaluate(test);

	free(test);
	free_list(&head);
	free_list(&new);
}
