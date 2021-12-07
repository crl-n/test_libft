/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strtrim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 18:29:59 by cnysten           #+#    #+#             */
/*   Updated: 2021/12/07 18:25:12 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_strtrim(void)
{
	t_test	*test = new_test();
	print_function("FT_STRTRIM");
	
	char	*r1 = ft_strtrim(" Hello. ");
	char	*r2 = ft_strtrim("");
	char	*r3 = ft_strtrim("  \t\t\n\n Trim \t \t this \n \n \t   ");

	test_string("Hello.", r1, test);
	//printf("Result: %s\n", r1);
	test_string("", r2, test);
	//printf("Result: %s\n", r2);
	test_string("Trim \t \t this", r3, test);
	//printf("Result: %s\n", r3);

	evaluate(test);

	free(test);
	free(r1);
	free(r2);
	free(r3);
}
