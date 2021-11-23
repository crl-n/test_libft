/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strsub.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 15:41:12 by cnysten           #+#    #+#             */
/*   Updated: 2021/11/18 11:28:36 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_strsub(void)
{
	print_ft("FT_STRSUB");
	
	char	*s1 = ft_strsub("abcdef", 0, 6);
	char	*s2 = ft_strsub("abcdef", 3, 6);
	char	*s3 = ft_strsub("abcxyzdef", 3, 3);
	char	*s4 = ft_strsub("420xyz", 1, 0);
	char	*s5 = ft_strsub(NULL, 1, 3);

	test_str("abcdef", s1, "Original string as substring (\"abcdef\", 0, 6)");
	test_str("def", s2, "Basic substring at end of str (\"abcdef\", 3, 6)");
	test_str("xyz", s3, "Basic substring in the middle (\"abcxyzdef\", 3, 6)");
	test_str("", s4, "Len 0 (\"420xyz\", 1, 0)");
	test_adr(NULL, s5, "Null string (NULL, 1, 3)");

	free(s1);
	free(s2);
	free(s3);
	free(s4);
	free(s5);
}
