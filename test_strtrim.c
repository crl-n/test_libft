/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strtrim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 18:29:59 by cnysten           #+#    #+#             */
/*   Updated: 2021/12/01 17:07:57 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_strtrim(void)
{
	print_function("FT_STRTRIM");
	
	char	*r1 = ft_strtrim(" Hello. ");
	char	*r2 = ft_strtrim("");
	char	*r3 = ft_strtrim("  \t\t\n\n Trim \t \t this \n \n \t   ");

	test_str("Hello.", r1, "Space before and after");
	printf("Result: %s\n", r1);
	free(r1);
	test_str("", r2, "Empty string");
	printf("Result: %s\n", r2);
	free(r2);
	test_str("Trim \t \t this", r3, "Tabs and newlines");
	printf("Result: %s\n", r3);
	free(r3);

}
