/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 09:46:58 by cnysten           #+#    #+#             */
/*   Updated: 2021/11/03 09:52:00 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	main(void)
{
	char str[] = "Hello world.";

	printf("%s\n", str);
	memcpy(str + 2, str, 3);
	printf("%s\n", str);
	return (0);
}
