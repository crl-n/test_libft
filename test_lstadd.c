/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstadd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 13:40:11 by cnysten           #+#    #+#             */
/*   Updated: 2021/11/22 16:43:41 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_lstadd(void)
{
	print_ft("FT_LSTADD");

	t_list	*lst = ft_lstnew("42", 3);

	ft_lstadd(&lst, ft_lstnew("21", 3));

	test_str("21", lst->content, "Content changed");

	// Todo null crash test
}
