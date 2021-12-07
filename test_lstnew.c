/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 13:36:53 by cnysten           #+#    #+#             */
/*   Updated: 2021/12/07 14:10:21 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_lstnew(void)
{
	t_test	*test = new_test();
	char	*content = "This is data";
	char	*content2 = "";
	t_list	*lst = ft_lstnew(content, 13);
	t_list	*lst2 = ft_lstnew(content2, 1);
	t_list	*lst3 = ft_lstnew(NULL, 0);
	
	print_function("FT_LSTNEW");
	test_string(content, lst->content, test);
	test_diff_adr(content, lst->content, test);
	test_string(content2, lst2->content, test);
	test_address(NULL, lst3->content, test);
	test_size(0, lst3->content_size, test);

	evaluate(test);

	free(test);
	free(lst->content);
	free(lst2->content);
	free(lst3->content);
	free(lst);
	free(lst2);
	free(lst3);
}
