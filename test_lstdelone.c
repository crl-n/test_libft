/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstdelone.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 13:48:08 by cnysten           #+#    #+#             */
/*   Updated: 2021/11/19 15:49:41 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

static void	del(void *ptr, size_t size)
{
	(void) size;
	free(ptr);
}
/*
static void	del_arr(void *ptr, size_t size)
{
	size_t	i;

	i = 0;
	while (i++ < size)
	{
		if (ptr)
			free(ptr++);
	}
}
*/
void	test_lstdelone(void)
{
	print_ft("FT_LSTDELONE");

	//char	arr[3][4] = {"abc", "ijk", "xyz"};
	t_list	*lst1 = ft_lstnew("Delete this", 12);
	//t_list	*lst2 = ft_lstnew(arr, sizeof (arr));
	//printf("adr of lst: %p\n", lst1);
	//printf("adr of lst1->content: %p\n", lst1->content);
	//printf("adr of str1: %p\n", str1);
	ft_lstdelone(&lst1, del);
	//printf("adr of str1: %p\n", str1);
	//printf("adr of lst: %p\n", lst1);
	test_adr(NULL, lst1, "Pointer to link is set to null");
	//ft_lstdelone(&lst2, del);	
	//test_adr(NULL, lst2, "Pointer to link is set to null");
}
