/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   other_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:43:37 by cnysten           #+#    #+#             */
/*   Updated: 2021/11/23 15:50:27 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	evaluate(size_t target, size_t passed)
{
	if (target < 4)
		printf("\t");
	if (passed == target)
		puts("\tPassed!");
	else
		puts("\tFailed.");
}
