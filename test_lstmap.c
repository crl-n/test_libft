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
	print_function("FT_LSTMAP");

	t_list	*head = ft_lstnew("head", 5);
	t_list	*second = ft_lstnew("second", 7);
	t_list	*third = ft_lstnew("third", 6);
	t_list	*new;
	
	head->next = second;
	second->next = third;
	
	new = ft_lstmap(head, ok);

	test_str("OK", new->content, "Head content mapped");
	test_str("OK", (new->next)->content, "Second content mapped");
	test_str("OK", ((new->next)->next)->content, "Third content mapped");
	test_str("head", head->content, "Head content mapped");
	test_str("second", (head->next)->content, "Second content mapped");
	test_str("third", ((head->next)->next)->content, "Third content mapped");

	free_list(&head);
	free_list(&new);
}
