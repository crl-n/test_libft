/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strjoin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:16:39 by cnysten           #+#    #+#             */
/*   Updated: 2021/11/18 10:44:28 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_strjoin(void)
{
	print_ft("FT_STRJOIN");

	char	*s1 = ft_strjoin("Nyan", "cat");
	test_str("Nyancat", s1, "Nyan + cat = Nyancat");
	free(s1);
}
