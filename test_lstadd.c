/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstadd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 13:40:11 by cnysten           #+#    #+#             */
/*   Updated: 2021/12/01 17:01:16 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_lstadd(void)
{
	t_test	*test = new_test();

	print_function("FT_LSTADD");

	t_list	*lst = ft_lstnew("42", 3);

	ft_lstadd(&lst, ft_lstnew("21", 3));

	//test_str("21", lst->content, "Content changed");
	test_string("21", lst->content, test);
	
	evaluate(test);

	// Todo null crash test
}
