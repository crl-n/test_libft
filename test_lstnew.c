/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 13:36:53 by cnysten           #+#    #+#             */
/*   Updated: 2021/12/01 17:07:22 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_lstnew(void)
{
	char	*content = "This is data";
	char	*content2 = "";
	t_list	*lst = ft_lstnew(content, 13);
	t_list	*lst2 = ft_lstnew(content2, 1);
	t_list	*lst3 = ft_lstnew(NULL, 0);
	
	print_function("FT_LSTNEW");
	test_str(content, lst->content, "Same content");
	test_diff_adr(content, lst->content, "Different address");
	test_str(content2, lst2->content, "Empty string.");
	test_adr(NULL, lst3->content, "Null content");
	test_size_t(0, lst3->content_size, "Null content size");
	free(lst);
	free(lst2);
	free(lst3);
}
