/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstsize.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 21:17:59 by cnysten           #+#    #+#             */
/*   Updated: 2021/12/01 17:00:28 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_lstsize(void)
{
	t_test *test = new_test();
	t_list	*lst = NULL;

	print_function("FT_LSTSIZE");

	// Test empty list
	test_size(ft_lstsize(lst), 0, test);

	// Add node and test
	lst = ft_lstnew("Being crazy is hard. \
			You’re getting all hung up, all hung up on imaginary problems. \
			You gotta focus on what’s real, man.", 125);
	test_size(ft_lstsize(lst), 1, test);

	// Add node and test
	lst->next = ft_lstnew("Bad biscuits make the baker broke, bro.", 40);
	test_size(ft_lstsize(lst), 2, test);

	// 
	lst->next->next = ft_lstnew("Just do whatever you want man, \
			as long as it comes from the inside.", 68);
	test_size(ft_lstsize(lst), 3, test);

	// Evaluate end result
	evaluate(test);
}
