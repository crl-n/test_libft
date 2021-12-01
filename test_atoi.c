/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 10:33:28 by cnysten           #+#    #+#             */
/*   Updated: 2021/12/01 22:06:30 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_atoi(void)
{
	t_test	*test = new_test();
	char	str1[] = " 123";
	char	str2[] = " +123";
	char	str3[] = " -123";
	char	str4[] = " -+123";
	char	str5[] = " + 123";
	char	str6[] = " - 123";
	char	str7[] = " +-123";
	char	str8[] = " --123";
	char	str9[] = " 123 ";
	char	str10[] = "\t\v\n\r\f123";
	char	str11[] = INT_MIN;
	char	str12[] = INT_MAX;
	char	str13[] = "-2147483649";
	char	str14[] = "2147483648";

	print_function("FT_ATOI");

	test_integer(atoi(str1), ft_atoi(str1), test);
	test_integer(atoi(str2), ft_atoi(str2), test);
	test_integer(atoi(str3), ft_atoi(str3), test);
	test_integer(atoi(str4), ft_atoi(str4), test);
	test_integer(atoi(str5), ft_atoi(str5), test);
	test_integer(atoi(str6), ft_atoi(str6), test);
	test_integer(atoi(str7), ft_atoi(str7), test);
	test_integer(atoi(str8), ft_atoi(str8), test);
	test_integer(atoi(str9), ft_atoi(str9), test);
	test_integer(atoi(str10), ft_atoi(str10), test);
	test_integer(atoi(str11), ft_atoi(str11), test);
	test_integer(atoi(str12), ft_atoi(str12), test);
	test_integer(atoi(str13), ft_atoi(str13), test);
	test_integer(atoi(str14), ft_atoi(str14), test);
	// test_int(atoi(NULL), ft_atoi(NULL), "NULL");
	// ft_atoi(NULL);
	/*
	printf("org: %s\tatoi: %d\tft_atoi: %d\n", str1, atoi(str1), ft_atoi(str1));
	printf("org: %s\tatoi: %d\tft_atoi: %d\n", str2, atoi(str2), ft_atoi(str2));
	printf("org: %s\tatoi: %d\tft_atoi: %d\n", str3, atoi(str3), ft_atoi(str3));
	printf("org: %s\tatoi: %d\tft_atoi: %d\n", str4, atoi(str4), ft_atoi(str4));
	printf("org: %s\tatoi: %d\tft_atoi: %d\n", str5, atoi(str5), ft_atoi(str5));
	printf("org: %s\tatoi: %d\tft_atoi: %d\n", str6, atoi(str6), ft_atoi(str6));
	printf("org: %s\tatoi: %d\tft_atoi: %d\n", str7, atoi(str7), ft_atoi(str7));
	printf("org: %s\tatoi: %d\tft_atoi: %d\n", str8, atoi(str8), ft_atoi(str8));
	printf("org: %s\tatoi: %d\tft_atoi: %d\n", str9, atoi(str9), ft_atoi(str9));
	printf("org: \\t\\n\\r\\f\\v123\tatoi: %d\tft_atoi: %d\n", atoi(str10), ft_atoi(str10));
	printf("org: -2147483648\tatoi: %d\tft_atoi: %d\n", atoi(str11), ft_atoi(str11));
	printf("org: 2147483647\tatoi: %d\tft_atoi: %d\n", atoi(str12), ft_atoi(str12));
	*/
	//printf("org: -2147483649\tatoi: %d\tft_atoi: %d\n", atoi(str13), ft_atoi(str13));
	//printf("org: 2147483648\tatoi: %d\tft_atoi: %d\n", atoi(str14), ft_atoi(str14));

	evaluate(test);
	free(test);
}
